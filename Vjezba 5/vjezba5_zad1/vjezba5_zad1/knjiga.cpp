#include"knjiga.h"

Book::Book(string a, string b, string c) {
	autor = a; naslov_knjige = b; godina_izdanja = c;
}
Book::Book() {
	autor = "";
	naslov_knjige = "";
	godina_izdanja = "";
}
Book::~Book() {}

HardCopyBook::HardCopyBook(string d) {
	broj_stranica = d;
}

HardCopyBook::HardCopyBook() {
	broj_stranica = "0";
}

HardCopyBook::~HardCopyBook() {}

EBook::EBook(string i, string d) {
	ime_datoteke = i;
	velicina = d;
}
EBook::EBook() {
	ime_datoteke = "";
	velicina = "";
}

EBook::~EBook() {}

Library::Library(int d = 1) {
	niz = new Book[d];
}

Library::~Library() {
	delete[] niz;
}

void Book :: print_book() {
	cout << autor <<"    " + naslov_knjige + "      " <<godina_izdanja << endl;
}

void Library::niz_naslova( int sz, string c) {
	for (int i = 0; i < sz; i++)
		if(niz[i].autor == c)
			cout << niz[i].naslov_knjige << endl;
}

void Library::ukupna_velicina(int sz, EBook *c, string v) {
	double ve = 0;
	for (int i = 0; i < sz; i++) {
		if (c[i].autor == v) {
			c[i].velicina[c[i].velicina.length() - 1] == '\0';
			c[i].velicina[c[i].velicina.length() - 2] == '\0';
			ve = ve + stod(c[i].velicina);
		}
	}
	cout << "Velicina je:  " << ve << "MB" << endl; 
}

void Library::vraca_naslov(string c, int sz) {
	for (int i = 0; i < sz; i++) {
		if (niz[i].naslov_knjige.find(c) != string::npos){
			cout << niz[i].naslov_knjige << endl;
		}
	}
}