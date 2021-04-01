#include <iostream>

using namespace std;

class tocka {
public:
	double x, y, z;
	void toc(double x1, double y1, double z1) { x = x1; y = y1; z = z1; };
};

class meta {
	tocka a, b;

public:
	void met(tocka a, tocka b);
	void pogodak(tocka c) const;
};

void meta::met(tocka a, tocka b) {
	this->a = a;
	this->b = b;
}

void meta::pogodak(tocka c) const {
	if ((c.x >= a.x && c.x <= b.x) && (c.y >= a.y && c.y <= b.y) && (c.z >= a.z && c.z <= b.z)) {
		cout << "Meta je pogodena";
	}
	else
		cout << "Meta nije pogodena";
}

int main() {
	meta a;
	tocka a1, b1;
	a1.toc(2, 3, 5);
	b1.toc(5, 9, 10);
	a.met(a1, b1);
	tocka c;
	c.toc(3, 6, 20);
	a.pogodak(c);
}