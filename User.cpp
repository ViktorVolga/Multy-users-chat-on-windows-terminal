#include "user.h"
#include "Chat.h"

const std::string& User::getLogin() const
{
	return _logIn;
}

const std::string& User::getPass() const
{
	return _password;
}



