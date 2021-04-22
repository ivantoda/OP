#include"Zivotinja.h"

Zivotinja::~Zivotinja() {}

int Kukac::broj_nogu(){
	return br_nogu_k = 6;
}

string Kukac::vrsta() {
	return vrsta();
}

Kukac::~Kukac() {}

int Pauk::broj_nogu() {
	return br_nogu_p = 8;
}

string Pauk::vrsta() {
	return vrsta();
}

Pauk::~Pauk() {}

int Ptica::broj_nogu() {
	return br_nogu_t = 2;
}

string Ptica::vrsta() {
	return vrsta();
}

Ptica::~Ptica() {}

string Zohar::vrsta() {
	return "Zohar";
}

Zohar::~Zohar() {}

string Tarantula::vrsta() {
	return "Tarantula";
}

Tarantula::~Tarantula() {}

string Vrabac::vrsta() {
	return "Vrabac";
}

Vrabac::~Vrabac() {}

void Brojac::Br(Zivotinja &c) {
	cout <<"Dodano: " << c.vrsta() << endl;
	ukup_broj += c.broj_nogu();
}

void Brojac::print() {
	cout << "Ukupan broj nogu je : " << ukup_broj <<endl;
}