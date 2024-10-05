
#include <string>
#include <iostream>


class Account {
private:
	//atributes
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	int series;
	static int contor;
	

public:
	//methods
	
	void set_name(std::string nume);
	std::string get_name();

	void set_surname(std::string prenume);
	std::string get_surname();

	void set_occupation(std::string ocupatie);
	std::string get_occupation();

	void set_username(std::string nume_utilizator);
	std::string get_username();

	void set_password(std::string parola);
	std::string get_password();

	void set_series(int serie);
	int get_series();

	static int get_contor();

	int get_series()const;

	Account(std::string nume, int serie);
	
	Account(std::string nume);

	Account(std::string nume, std::string prenume, int serie);

	~Account();

	Account(std::string nume, std::string prenume);
	
	Account();

	Account(int serie);

	Account(std::string prenume, std::string nume, std::string parola);


	
	
};
