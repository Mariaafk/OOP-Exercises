#include "Student.h"


Student::Student(std::string name) : Person(name)
{
	
}

void Student::say_hello()
{
	std::cout << "Hello, my name is " << account.get_name() << " and i'm a student." << std::endl << account.get_name() << std::endl;
	
}

void Student::vir_say_hello()
{
	std::cout << "Hello, my name is " << account.get_name() << " and i'm a student. VIRTUAL" << std::endl << account.get_name() << std::endl;

}

void Student::call()
{
	account.set_username("KingOfHearts176");
	std::cout << "Username for student is : " << account.get_username() << std::endl;
}
