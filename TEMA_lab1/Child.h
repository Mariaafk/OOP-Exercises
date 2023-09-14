#pragma once
#include "Person.h"

class Child : public Person
{
protected:
	int child_id;
	int toys;

public:
	Child(std::string name);
	void say_hello();
	void call();
	virtual void vir_say_hello();
};

