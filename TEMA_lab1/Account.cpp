
#include "Account.h"

using namespace std;

int Account::contor = 0;

 


void Account::set_name(std::string nume)
{
	name = nume;
}
std::string Account::get_name()
{
	return name;
}

void Account::set_surname(std::string prenume)
{
	surname = prenume;
}
std::string Account::get_surname()
{
	return surname;
}

void Account::set_username(std::string nume_utilizator)
{
	username = nume_utilizator;
}
std::string Account::get_username()
{
	return username;
}

void Account::set_password(std::string parola)
{
	password = parola;

}
std::string Account::get_password()
{
	return password;
}

void Account::set_series(int serie)
{
	series = serie;

}
int Account::get_series()
{
	return series;
}


//HERE
Account::Account(std::string nume, int serie)
{
	name = nume;
	cout << " Constructor with 2 param. " << endl;
	contor++;
	
}



Account::Account(std::string nume)
{
	
	name = nume;
	cout << " Constructor with 1 param." << endl;
	contor++;
	
}

Account::Account(std::string nume, std::string prenume, int serie)
{
	name = nume;
	surname = prenume;
	series = serie;
	cout << " Constructor with 3 param." << endl;
	 
}

 Account::~Account()
{
	cout << " The call to distruct was made by " << name << endl;
	contor--;
}

 Account::Account(std::string nume, std::string prenume) : name{ nume }, surname{ prenume }
 {
	 cout << " Constructor with 3 parameters" << endl;
	 contor++;
 }

 Account::Account() : Account::Account { "Ana","Ion",0}
 {
	 cout << " Counstructor with 2 parameters " << endl;
	 contor++;
	
 }

 Account::Account(int serie) :Account::Account{"","",serie}
 {
	 cout << " Constuctor with 1 parameter " << endl;
	 contor++;
	 
 }

 Account::Account(std::string prenume, std::string nume, std::string parola) 
 {
	 this->name = "Ana";
	 this->surname = "Ion";
	 this->password = "Atlantic124";
	 cout << " Constuctor with 1 parameter " << endl;
	 contor++;
	
 }
 
 int Account::get_contor()
 {
	 return contor;
 }

 int Account::get_series() const
 {
	 return this->series;
 }
 