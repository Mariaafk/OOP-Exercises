#pragma once
#include "Account.h"
#include "application.h"


class Person : public application 
{
	//atributes
public:
	std::string name;
	std::string phone;
protected:
	int series;
	std::string CNP;
	Account account;

	//methods
public:
	Person(std::string nume);
	void say_hello();
	virtual void vir_say_hello();
	void call();
	virtual void message()final ;

	void set_CNP(std::string telefon);
	std:: string get_CNP();
	
	
};

