#pragma once

#include "main.h"

class Human
{
	private:
		string name;
		string surname;
		int age;

	public:
		static const int Max_age = 160;
		static const int Min_age = 0;

		Human();
		Human(string name, string sname, int a);

		void set_age(int a);
		int get_age();
				string get_name();
		void set_name(string n);
		string get_surname();
		void set_surname(string sn);

	//	string convert_to_string();

};

