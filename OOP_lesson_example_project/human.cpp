#include "human.h"
Human::~Human() {
	cout << "Call human destruction...";
}

int Human::get_age() {
	return age;
}

void Human::set_age(int a) {
	if (a > Max_age && a < Min_age)
	{
		age = a;
	}
}


string Human::get_name() {
	return name;
}

void Human::set_name(string n) {
	name = n;
}


string Human::get_surname() {
	return surname;
}

void Human::set_surname(string sn) {
	surname = sn;
}

//
//string Human::convert_to_string() {
//	return name + " " + surname + " (age = " + to_string(age) + ") " + "(avg mark: " + to_string(avg_mark) + ") ";
//}
