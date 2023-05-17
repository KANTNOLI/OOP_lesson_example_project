#pragma once
#include "Human.h"

class Doctor : public Human
{
private:

	int expirience;
	string skill;

public:
	Doctor() : expirience(0), skill("NoSkill") {}
	Doctor(string name, string surname, int age, int expirience, string skill) : Human(name, surname, age),
		expirience(expirience), skill(skill) {}

	~Doctor();

	int get_expirience();
	void set_expirience(int ex);

	string get_skill();
	void set_skill(string skl);
	string convert_to_string();
};

