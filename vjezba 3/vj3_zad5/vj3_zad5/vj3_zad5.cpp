#include <iostream>
#include <cmath>
#include<complex>

using namespace std;

#define PI 3.14159265358979323846

class tocka {
public:
	double x = 0, y = 0, z = 0;
	void randtoc();
};

class oruzje {
public:
	tocka a, b;
	double provxy = 0;
	double const z1 = 5.0;
	int br_broj = 50;
	int tr_broj = 50;
	void polozaj() { a.x = 0; a.y = 0; a.z = z1; b.x = 30.0; provxy = b.x; b.y = 0; b.z = z1; }
	void shoot();
	void reload();
};

class meta {
public:
	tocka a, b;

	void met(tocka a, tocka b);
	void print_met() const;
};

void oruzje::shoot() {
	tr_broj--;
	if (tr_broj == 0)
	{
		cout << "Nestalo je metaka ---- " << endl;
		//reload();
	}
}

void oruzje::reload() {
	tr_broj = br_broj;
}

void tocka::randtoc() {
	this->x = double(rand() % (20 - (-20)) + 1.0) + (-20.0);
	this->y = double(rand() % (20 - (-20)) + 1.0) + (-20.0);
	this->z = double(rand() % (20 - (-20)) + 1.0) + (-20.0);
}

void meta::print_met() const {
	cout << "Tocka a:  x: " << a.x << "  y: " << a.y << "  z: " << a.z << endl;
	cout << "Tocka b:  x: " << b.x << "  y: " << b.y << "  z: " << b.z << endl;
	cout << endl;
}

void meta::met(tocka a, tocka b) {
	this->a = a;
	this->b = b;
}


int sudar(tocka a, tocka b, tocka c, tocka d)
{
	double s1_x, s1_y, s2_x, s2_y;
	s1_x = b.x - a.x;     s1_y = b.y - a.y;
	s2_x = d.x - c.x;     s2_y = d.y - c.y;

	double s, t;
	s = (-s1_y * (a.x - c.x) + s1_x * (a.y - c.y)) / (-s2_x * s1_y + s1_x * s2_y);
	t = (s2_x * (a.y - c.y) - s2_y * (a.x - c.x)) / (-s2_x * s1_y + s1_x * s2_y);

	if (s >= 0 && s <= 1 && t >= 0 && t <= 1)
	{
		// Sudar
		return 1;
	}
	return 0; // Nije sudar
}

void pogodena(meta& niz) {
	niz.a.x = NULL;
	niz.a.y = NULL;
	niz.a.z = NULL;
	niz.b.x = NULL;
	niz.b.y = NULL;
	niz.b.z = NULL;
}

void rotate(oruzje& a)
{
	double x1 = a.b.x - a.a.x;
	double y1 = a.b.y - a.a.y;

	double par = 1.0;

	double x2 = x1 * cos(par * PI / 180) - y1 * sin(par * PI / 180);
	double y2 = x1 * sin(par * PI / 180) + y1 * cos(par * PI / 180);

	a.b.x = x2 + a.a.x;
	a.b.y = y2 + a.a.y;

}

int provjera(oruzje k, meta* niz, int n) {
	int br = 0;
	for (int i = k.tr_broj; i > 0; i = k.tr_broj)
	{
		for (int j = 0; j < n; j++) {
			if (k.a.z >= niz[j].a.z && k.a.z <= niz[j].b.z) {
				tocka c, d;
				c.x = niz[j].a.x;
				c.y = niz[j].a.y;
				d.x = c.x;
				d.y = niz[j].b.y;
				if (sudar(k.a, k.b, c, d) == 1) {
					br++;
					pogodena(niz[j]);
				}
				c.x = niz[j].a.x;
				c.y = niz[j].a.y;
				d.x = niz[j].b.x;
				d.y = c.y;
				if (sudar(k.a, k.b, c, d) == 1) {
					br++;
					pogodena(niz[j]);
				}
				c.x = niz[j].a.x;
				c.y = niz[j].b.y;
				d.x = niz[j].b.x;
				d.y = niz[j].b.y;
				if (sudar(k.a, k.b, c, d) == 1) {
					br++;
					pogodena(niz[j]);
				}
				c.x = niz[j].b.x;
				c.y = niz[j].a.y;
				d.x = niz[j].b.x;
				d.y = niz[j].b.y;
				if (sudar(k.a, k.b, c, d) == 1) {
					br++;
					pogodena(niz[j]);
				}
			}
			k.shoot();
			rotate(k);
		}
	}
	return br;
}



int main() {
	int n;
	cin >> n;
	meta* niz = new meta[n];
	for (int i = 0; i < n; i++) {
		tocka a, b;
		a.randtoc();
		b.x = a.x + 6;
		b.y = a.y + 7;
		b.z = a.z + 8;
		niz[i].met(a, b);
	}
	oruzje k;
	k.polozaj();

	int br = provjera(k, niz, n);
	cout << "Broj pogodeni meta:" << br;

}