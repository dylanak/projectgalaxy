#ifndef _CTM_EXCEPTION_H
#define _CTM_EXCEPTION_H
#include <exception>
#include <iostream>
#include <functional>
#include <sstream>
#include <map>
#include "../registry/registry.h"
#define E_CTM_EXCEPTIONMESSAGE 0
#define E_CTM_CRASH 1
#define E_JSON_BRACS 1024
#define E_CONVERT_ERROR 2048
#define E_CONVERT_INCOMPAT 2049
namespace ctm
{
	class exception : public std::exception
	{
		public:
			const int32_t code;
			std::string message;

			exception(const int32_t& code);
			exception(const int32_t& code, void* const params);
			exception(const int32_t& code, void* const params, const std::exception_ptr& cause);

			virtual const char* what() const noexcept;

			static void registerexception(const int32_t& code, std::string (*messager)(void* const params));
		private:
			static std::string getexceptionmessage(const int32_t& code, void* const params, const std::exception_ptr& cause);
	};
}
#endif
