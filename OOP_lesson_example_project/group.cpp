#include "group.h"


Group::Group() {
	name = "no_name";
	size = 0;
}


Group::Group(Student* ls, int sz, string nm) {
	name = nm;
	if (sz <= DEFAULT_SIZE)
	{

		size = sz;

		for (int i = 0; i < sz; i++)
		{
			list[i] = ls[i];
		}
	}
	else {
		size = 0;
	}

}
Group::Group(string nm) {
	name = nm;
	size = 0;

}
Group::~Group() {

}

string Group::get_name() {
	return name;
}

void Group::set_name(string n) {
	name = n;
}
//
//bool Group::add(Student student) {
//	if (size < DEFAULT_SIZE)
//	{ 
//		list[size] = student; 
//		size++; 
//	}
//}

//void Group::remove(Student student) {
//
//}
//void Group::remove(int index) {
//
//}
//Student Group::get(int index) {
//
//}

int Group::get_size() {
	return size;
}
string Group::convert_to_string() {
	string msg = "Student list of group " + name + ":";
	for (int i = 0; i < size; i++)
	{
		msg += "\n" + list[i].convert_to_string();
	}
	return msg;
}
