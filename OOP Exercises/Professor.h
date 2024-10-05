#pragma once
#include "Person.h"



class Professor : public Person
{
	//atributes
protected:
	double salary;
	int no_properties;


	//methods
public:
	Professor(std::string name);
	void say_hello();
	void call();
	void vir_say_hello();

};

