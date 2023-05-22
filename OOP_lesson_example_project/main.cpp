#include "human.h"
#include "doctor.h"

int main() {
	Human* h = new Human();

	h->get_name();


	delete h;
	return 0;
}