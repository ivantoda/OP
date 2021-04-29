#include"vehicle.h"

using namespace std;

vehicle::~vehicle() {}

string aircraft::type() {
	return "air";
}

string watercraft::type() {
	return "water";
}

unsigned int ferry::passangers() {
	return br_putnika_f + br_bicikla + (br_automobila * 5);
}

ferry::ferry(int br_p = 0, int br_b = 0, int br_a = 0) {
	br_putnika_f = br_p;
	br_bicikla = br_b;
	br_automobila = br_a;
}

string ferry::type() {
	return watercraft::type();
}

catamaran::catamaran(int a) {
	br_putnika_c = a;
}

string catamaran::type() {
	return watercraft::type();
}

unsigned int catamaran::passangers() {
	return br_putnika_c;
}

seaplane::seaplane(int a) {
	br_putnika_s = a;
}

string seaplane::type() {
	return aircraft::type() +"-"+ watercraft::type() ;
}

unsigned int seaplane::passangers() {
	return br_putnika_s;
}

void counter::add(vehicle* a) {
	cout << a->type() << ", putnika: " << a->passangers() << endl;
	ukup_br += a->passangers();
}

int counter::total() {
	return ukup_br;
}