#pragma once
#include "Professor.h"



Professor::Professor(std::string name) : Person(name)
{

}

void Professor::say_hello()
{
	std::cout << "Hello, my name is " << account.get_name() << " and i'm a professor." << std::endl;

}

void Professor::vir_say_hello()
{
	std::cout << "Hello, my name is " << account.get_name() << " and i'm a professor.  VIRTUAL" << std::endl;

}

void Professor::call()
{
	account.set_series(3243);
	std::cout << "Series for professor is : " << account.get_series() << std::endl;
}
