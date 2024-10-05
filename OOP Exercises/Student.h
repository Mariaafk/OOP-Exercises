#pragma once
#include "Person.h"
#include "Professor.h"
class Student : public Person
{
	//atributes
protected:
	int student_id;
public:
	std::string group;

	//methods
	Student(std::string name);
	void say_hello();
	void call();
	void vir_say_hello();
};

