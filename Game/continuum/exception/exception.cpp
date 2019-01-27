#include "exception.h"
namespace ctm
{
	exception::exception(const int32_t& code) : exception(code, NULL, (std::exception_ptr)nullptr) { }
	exception::exception(const int32_t& code, void* const params) : exception(code, params, (std::exception_ptr)nullptr) { }
	exception::exception(const int32_t& code, void* const params, const std::exception_ptr& cause) : code(code), message(getexceptionmessage(code, params, cause)) { }

	const char* exception::what() const noexcept { return this->message.data(); }

	std::map<int32_t, std::string (*)(void* const)> messagemap;

	void exception::registerexception(const int32_t& code, std::string (*messager)(void* const params))
	{
		messagemap[code] = messager;
	}

	std::string exception::getexceptionmessage(const int32_t& code, void* const params, const std::exception_ptr& cause)
	{
		std::stringstream s;
		if(code == E_CTM_EXCEPTIONMESSAGE)
		{
			auto& c = *(int32_t*)params;
			s << "Due to exception " << c << " (" << std::hex << c << ") not being registered, a message could not be generated.";
		}
		else
		{
			auto headermessager = messagemap[code];
			if(headermessager)
			{
				s << headermessager(params);
				if(cause)
				{
					std::string submessage = "\n";
					try
					{
						std::rethrow_exception(cause);
					}
					catch(const std::exception& e)
					{
						submessage += (std::string)e.what();
					}
					catch(...)
					{
						submessage += "unknown error of type " + (std::string)std::current_exception().__cxa_exception_type()->name();
					}
					s << "\nCaused by:";
					for(auto& c : submessage)
					{
						s << c;
						if(c == '\n')
							s << '\t';
					}
				}
			}
			else
				throw exception(E_CTM_EXCEPTIONMESSAGE, new int32_t(code));
		}
		return s.str();
	}
}
