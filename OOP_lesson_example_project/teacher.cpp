#include "teacher.h"

Teacher::Teacher() {
	set_name("NoName");
	set_surname("NoSurName");
	set_age(15);
	power = 15;
}
Teacher::Teacher(string n, string sname, int a, int pow) {
	set_name(n);
	set_surname(sname);
	set_age(a);
	power = pow;
} 


Teacher::~Teacher() {

}

int Teacher::get_power() {
	return power;
}
void Teacher::set_power(int pow) {
	if (pow > 0 and pow < 100) {
		power = pow;
	}
	else {
		power = 0;
	}
}

string Teacher::convert_to_string() {
	return get_name() + " " + get_surname() + " (age = " + to_string(get_age()) + ") " + "(power: " + to_string(power) + ") ";

}