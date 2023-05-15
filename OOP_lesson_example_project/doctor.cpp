#include "doctor.h"

Doctor::Doctor() {
	set_name("NoName");
	set_surname("SurName");
	set_age(15);
	skill = "NoSkill";
	expirience = 16; 
}
Doctor::Doctor(string n, string sname, int a, int exp, string skil) {
	set_name(n);
	set_surname(sname);
	set_age(a);
	skill = skil;
	expirience = exp;
}
Doctor::Doctor(string n, string sname) {
	set_name(n);
	set_surname(sname);

}

Doctor::~Doctor() {}

int Doctor::get_expirience() {
	return expirience > 0 and expirience < 100 ? expirience : -1;
}
void Doctor::set_expirience(int ex) {
	expirience = ex;
}

string Doctor::get_skill() {
	return skill;
}
void Doctor::set_skill(string skl) {
	skill = skl;
}
string Doctor::convert_to_string() {
	return get_name() + " " + get_surname() + " (age = " + to_string(get_age()) + ") " + "(Expirience: " + to_string(expirience) + ") " + " Skill = " + skill;

}
