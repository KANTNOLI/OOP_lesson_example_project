#pragma once
#include "main.h"
class Doctor
{
private:
	string name;
	string surname;
	int age;
	int expirience;
	string skill;

public:
	Doctor();
	Doctor(string n, string sname, int a, int exp, string skill);
	Doctor(string n, string sname);

	~Doctor();

	void set_age(int a);
	int get_age();

	string get_name();
	void set_name(string n);

	string get_surname();
	void set_surname(string sn);

	int get_expirience();
	void set_expirience(string sn);

	string get_skill();
	void set_skill(string sn);
};



};

