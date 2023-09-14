#include <iostream>
#include "Main.h"



//#include <vector>


using namespace std;

int Main::main()
{
	
		/*Account person1;
		person1.set_name("Radu");
		cout << person1.get_name() << "\n";
		person1.set_surname("Alexia");
		cout << person1.get_surname() << "\n";
		person1.set_username("Radu.Alexia.R");
		cout << person1.get_username() << "\n";
		person1.set_password("Atlantic333");
		cout << person1.get_password() << "\n";
		person1.set_series(2343);
		cout << person1.get_series() << "\n\n";

		Account* person2 = new Account();
		person2->set_name("Ion");
		cout << person2->get_name() << "\n";
		person2->set_surname("Ramona");
		cout << person2->get_surname() << "\n";
		person2->set_username("Ion.Ramona123");
		cout << person2->get_username() << "\n";
		person2->set_password("BlaBla2003");
		cout << person2->get_password() << "\n";
		person2->set_series(8876);
		cout << person2->get_series() << "\n\n";
		*/
		
	/*Account person3("Balcescu", "Nicolae", 1223);
	Account person4("Ioan", 9999);
	Account person5("Ionut");
	Account* person6 = new Account{ "Viorel","Ioan",99883 };
	const Account person7{ 9087 };
	cout << person7.get_series();
	cout << endl;
	cout << Account::get_contor();
	cout << endl;
	
	
	delete person6;
	*/

	/*Student s("Opris Ionut");
	s.say_hello();
	s.call();

	Person r("Neagu Ana");
	r.say_hello();

	Professor p("Popescu Daniel");
	p.say_hello();
	p.call();

	Child c("Ioan Alexandru");
	c.say_hello();
	c.call();
	
	//Evidentiaza mostenirea

	Student a("Ion");
	a.name;

	Person pe("Ana");
	pe.phone;

	Child co("Copil");
	co.name;

	Professor pr("Professor");
	pr.name;

	*/
	

	Person a("Ioan Radu");
	a.say_hello();

	Student b("Popescu Ana");
	b.say_hello();

	Person* p = new Student("Samuel Von Brukenthal");
	p->say_hello();

	delete p;

	cout << "Static polymorphism" << endl;

	Child c("Momo Sebastian");
	c.vir_say_hello();

	a.vir_say_hello();

	Person* x = new Child("Un copil");
	x->vir_say_hello();

	delete x;

	cout << "Example of dynamic polymorphism" << endl;

	application* d= new Person("BlaBla");

	a.message();

	cout << "Interface through abstract class" << endl;

	delete d;
	return 0;
}
	
	
int main()
{
	Main main;
	main.main();

	return 0;
}


