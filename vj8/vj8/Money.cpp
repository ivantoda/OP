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
	int d, f;
	d = a.lp - b.lp;
	f = a.kn - b.kn;
	if (d < 0) {
		f = f - 1;
		d = 100 + d;
	}
	return money(f, d);
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

money& money::operator-=(const money& a) { 
	kn -= a.kn;
	lp -= a.lp;
	if(lp < 0){
		kn--;
		lp = 100 - lp;
	}
	return *this; };