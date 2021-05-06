#include"Money.h"

using namespace std;

money::money(int a, int b) {
	kn = a;
	lp = b;
}

money operator+(money a, money b) {
	int d, f;
	d = a.lp + b.lp;
	f = a.kn + b.kn;
	if (d >= 100) {
		f = f + 1;
		d = d - 100;
	}
	return money(f ,d);
}

money operator-(money a, money b) {
	return money(a.kn - b.kn, a.lp - b.lp);
}

ostream& operator<<(ostream& a, money& b) {
	return a << b.kn <<" kuna, " << b.lp <<" lipa"; 
}

money& money::operator+=(const money& a) { 
	kn += a.kn;
	lp += a.lp;
	if (lp >= 100) {
		kn++;
		lp = lp - 100;
	}
	return *this; 
}