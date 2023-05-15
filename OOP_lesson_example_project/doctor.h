#pragma once
#include "Human.h"

class Doctor : public Human
{
private:

	int expirience;
	string skill;

public:
	Doctor();
	Doctor(string n, string sname, int a, int exp, string skill);
	Doctor(string n, string sname);

	~Doctor();

	int get_expirience();
	void set_expirience(int ex);

	string get_skill();
	void set_skill(string skl);
	string convert_to_string();
};

