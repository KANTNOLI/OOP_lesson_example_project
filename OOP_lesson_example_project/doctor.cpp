#include "doctor.h"

Doctor::Doctor() : Human() {
	skill = "NoSkill";
	expirience = 0; 
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
