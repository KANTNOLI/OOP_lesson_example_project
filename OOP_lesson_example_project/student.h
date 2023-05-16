#pragma once
#include "human.h"


class Student : public Human {
private:

	float avg_mark;

public:

	static const int Max_mark = 10;
	static const int Min_mark = 0;


	Student();
	Student(string name, string sname, int a, float mark);

	float get_avg_mark();
	void set_avg_mark(float avg);

	string convert_to_string();

};
