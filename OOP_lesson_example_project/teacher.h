#pragma once
#include "main.h"

class Teacher
{
private:
	string name;
	string surname;
	int age;
	int power;

public:
	Teacher();
	Teacher(string n, string sname, int a, int pow);
	Teacher(string n, string sname);

	~Teacher();

	void set_age(int a);
	int get_age();

	string get_name();
	void set_name(string n);

	string get_surname();
	void set_surname(string sn);

	int get_power();
	void set_power(int pow);
};

