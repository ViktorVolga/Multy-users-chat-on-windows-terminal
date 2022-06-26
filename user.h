#pragma once
#include <string>
#include <iostream>
#include <memory>

class User 
{
	std::string _name;
	const std::string _logIn;
	std::string _password;	
public:
	explicit User(const std::string& name, const std::string& logIn, const std::string& password) : _name(name), _logIn(logIn), _password(password) {};
	const std::string& getLogin() const;
	const std::string& getPass() const;	
};


