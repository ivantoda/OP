#include"Money.h"

using namespace std;

money::money(int a, int b) {
	kn = a;
	lp = b;
}

money operator+(money a, money b) {
	return money(a.kn + b.kn, a.lp + b.lp);
}

money operator-(money a, money b) {
	return money(a.kn - b.kn, a.lp - b.lp);
}

ostream& operator<<(ostream& a, money& b) {
	b.kn  = b.kn + b.lp / 100;
	b.lp = b.lp % 100;
	return a << b.kn <<" kuna, " << b.lp <<" lipa"; 
}