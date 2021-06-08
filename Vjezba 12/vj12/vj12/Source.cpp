#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include<list>

using namespace std;

struct igracice {
	int id;
	string inc;
	string ime;
	string drzava;
	int broj_gresaka;
	int mist_broj;
};

istream& operator>>(istream& is, igracice& i) { 
	return is >> i.id >> i.inc >> i.ime >> i.drzava >> i.broj_gresaka >> i.mist_broj;
}
ostream& operator<<(ostream& os, const igracice& p) {
	return os <<"  "<< p.id << "  "<< p.inc <<" "<< p.ime << "  " << p.drzava << "  " << p.broj_gresaka << "  " << p.mist_broj;
}

bool bris(const igracice& o) {
	return o.broj_gresaka >= 4;
}

bool cmp(const igracice& a, const igracice& b) {
	return a.broj_gresaka < b.broj_gresaka;
}

int main() {
	vector<igracice> a;
	ifstream f("winbledon_double_faults.txt");
	istream_iterator<igracice> is(f), ends;
	//ostream_iterator<igracice> os(cout, "\n");
	copy(is, ends, back_inserter(a));
	//copy(a.begin(), a.end(), os);
	//a.erase(std::remove_if(a.begin(), a.end(), bris), a.end());
	//for (int i = 0; i < a.size(); ++i)
	//	cout << a[i] << endl;
	auto iter = min_element(a.begin(), a.end(), cmp);
	cout << "Ime: " << iter->inc << "  Prezime: " << iter->ime << endl<<endl;
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << endl;
}