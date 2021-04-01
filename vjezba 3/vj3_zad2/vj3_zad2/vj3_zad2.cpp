#include<iostream>
using namespace std;

class tocka {
	double a = 0;
	double b = 0;
	double c = 0;
public:
	void vr_clanova(double a, double b, double c);
	void prvr_clanova(int a, int b);
	void get_clanove(double* x, double* y, double* z) const;
	double udaljenost(tocka a, tocka b);
	double udaljenost_z(tocka a, tocka b);
};

void tocka::vr_clanova(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

void tocka::prvr_clanova(int a, int b) {
	this->a = double(rand() % b + double(a));
	this->b = double(rand() % b + double(a));
	this->c = double(rand() % b + double(a));
}

void tocka::get_clanove(double* x, double* y, double* z) const {
	*x = a;
	*y = b;
	*z = c;
}

double tocka::udaljenost(tocka a, tocka b) {
	return sqrt(pow(a.a - b.a, 2) + pow(a.b - b.b, 2));
}

double tocka::udaljenost_z(tocka a, tocka b) {
	return sqrt(pow((b.a - a.a), 2) + pow((b.b - a.b), 2) + pow((b.c - a.c), 2));
}

int main() {
	tocka a;
	tocka b;
	a.vr_clanova(2, 3, 2);
	b.vr_clanova(5, 9, 10);
	//a.prvr_clanova(2, 15);
	//double *x, *y, *z;
	//x = new double;
	//y = new double;
	//z = new double;
	//a.get_clanove(x, y, z);
	//delete x;
	//delete y;
	//delete z;
	double c = a.udaljenost(a, b);
	cout << c << endl;
	double c1 = a.udaljenost_z(a, b);
	cout << c1;
}