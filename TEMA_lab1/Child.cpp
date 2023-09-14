#include "Child.h"


Child::Child(std::string name) : Person(name)
{

}

void Child::say_hello()
{
	std::cout << "Hello everyone my name is " << account.get_name() << " and i'm a child." << std::endl;
}
void Child::vir_say_hello()
{
	std::cout << "Hello everyone my name is " << account.get_name() << " and i'm a child. VIRTUAL" << std::endl;
}

void Child::call()
{
	account.set_series(2324);
	std::cout<<"Series for child is : " << account.get_series() << std::endl;

}