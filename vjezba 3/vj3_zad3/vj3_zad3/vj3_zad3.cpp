#include<iostream>

using namespace std;

class tocka {
	double x;
	double y;
	double z;
public:
	void pol_o(double x, double y, double z);
};

class oruzje {
	tocka polozaj;
	int br_metaka = 0;
	int tr_broj = 0;
public:
	void pol(tocka p);
	void shoot();
	void reload();
};

void tocka::pol_o(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void oruzje::pol(tocka p) {
	polozaj = p;
	br_metaka = 3;
	tr_broj = 3;
}

void oruzje::shoot() {
	tr_broj--;
	if (tr_broj == 0)
	{
		cout << "Nestalo je metaka, reload";
		reload();
	}
}

void oruzje::reload() {
	tr_broj = br_metaka;
}

int main() {
	tocka a1;
	a1.pol_o(2, 4, 6);
	oruzje a;
	a.pol(a1);
	int i;
	cin >> i;
	while (i == 1) {
		a.shoot();
		cin >> i;
	}
}