#include "Person.h"
#include "Professor.h"


Person::Person(std::string nume)
{
	Account a(nume,1234);
	this->account = a;

}


void Person::say_hello()
{
	std::cout << "Hello everyone my name is " << account.get_name() << " and i'm a person." << std::endl;
}

void Person::vir_say_hello()
{
	std::cout << "Hello everyone my name is " << account.get_name() << " and i'm a person.  VIRTUAL" << std::endl;
}

void Person::message()
{
	std::cout << " Hello everyone, have an amazing day! " << std::endl ;
	
}

void Person::set_CNP(std::string telefon)
{
	phone = telefon;
}
std::string Person::get_CNP()
{
	return phone;
}
