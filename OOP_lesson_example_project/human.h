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

		Human() {
			this->name = name; 
			this->surname = surname;
			this->age = age;
		
		}//: name("name"), surname("surname"), age(16) {}
		Human(string name, string surname, int age): name(name), surname(surname), age(age){} 
		~Human(); 

		void set_age(int a);
		int get_age();
		string get_name();
		void set_name(string n);
		string get_surname();
		void set_surname(string sn);

	//	string convert_to_string();

};

