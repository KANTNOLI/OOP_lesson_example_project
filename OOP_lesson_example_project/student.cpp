#include "student.h"



float Student::get_avg_mark() {
	return avg_mark;
}

void Student::set_avg_mark(float avg) {
	if (avg >= Min_mark && avg <= Max_mark)
	{
		avg_mark = avg;
	}
}

Student::Student() {
	//cout << "contruction whit out" << endl;
	set_name("NoName");
	set_surname("SurName");
	set_age(15);
	avg_mark = 4;
}

Student::Student(string name, string sname, int a, float mark) {
	//cout << "contruction whit out" << endl;
	set_name(name);
	set_surname(sname);
	set_age(a);
	avg_mark = mark;

}


string Student::convert_to_string() {
	return get_name() + " " + get_surname() + " (age = " + to_string(get_age()) + ") " + "(avg mark: " + to_string(avg_mark) + ") ";
}
