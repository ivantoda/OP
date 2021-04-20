#include"Game.h"

using namespace std;

int main() {
	Game igra;
	int temp;
	cout << "Zelite li igrati s 2 igraca ili s racunalom? (unesite 0 - za igrace...unesite 1 - za racunalo)" << endl;
	cin >> temp;
	if (temp == 0) {
		int od;
		string temp1;
		cout << "Unesite ime prvog igraca" << endl;
		cin >> temp1;
		igra.a1.set_ime(temp1);
		cout << "Unesite ime drugog igraca" << endl;
		cin >> temp1;
		igra.b1.set_ime(temp1);
		cout << igra.a1.ime() << " bira je li par ili nepar (0 za par, 1 za nepar)" << endl;
		cin >> od;
		if (od == 0) {
			cout << igra.a1.ime() << " je odabrao biti par. Sada baci broj od 1 do 5.  "<< endl;
			igra.a1.set_pn(0);
			igra.b1.set_pn(1);
		}
		else if (od == 1) {
			cout << igra.a1.ime() << " je odabrao biti nepar. Sada baci broj od 1 do 5.  " << endl;
			igra.a1.set_pn(1);
			igra.b1.set_pn(0);
		}
		else {
			cout << "Odabrali ste krivi broj." << endl;
		}
		cin >> od;
		igra.a1.set_odabir(od);
		cout << igra.b1.ime() << ", sada je tebe red baciti broj od 1 do 5" << endl;
		cin >> od;
		igra.b1.set_odabir(od);
		igra.provjera();
	}
	else if (temp == 1) {
		int od;
		string temp1;
		cout << "Unesite ime igraca" << endl;
		cin >> temp1;
		igra.a1.set_ime(temp1);
		cout << igra.a1.ime() << " bira je li par ili nepar (0 za par, 1 za nepar)" << endl;
		cin >> od;
		if (od == 0) {
			cout << igra.a1.ime() << " je odabrao biti par. Sada baci broj od 1 do 5.  " << endl;
			igra.a1.set_pn(0);
			igra.c1.set_pn(1);
		}
		else if (od == 1) {
			cout << igra.a1.ime() << " je odabrao biti nepar. Sada baci broj od 1 do 5.  " << endl;
			igra.a1.set_pn(1);
			igra.c1.set_pn(0);
		}
		else {
			cout << "Odabrali ste krivi broj." << endl;
		}
		cin >> od;
		igra.a1.set_odabir(od);
		igra.c1.Randbroj(); 
		cout << igra.c1.vime() << " je odabrao " << igra.c1.vodabir() << endl;
		igra.provjera1();
	}
}