#include "Zivotinja.h"

using namespace std;

int main() {
	Brojac br;
	Zivotinja* a[] = { new Zohar, new Tarantula, new Vrabac, new Tarantula };
	for (int i = 0; i < 4; i++) {
		a[i]->vrsta();
		a[i]->broj_nogu();
		br.Br(*a[i]);
	}
	br.print();
	for (int i = 0; i < 4; i++) {
		delete[] a[i];
	}
}