#include"Money.h"
#include<iomanip>

using namespace std;

int main() {
	// zadan je jednostavan cjenik
	money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);
	// gost je konzumirao:
	money racun = juha + becki + salata + pivo;
	// na zalost nas konobar je nepazljiv pa pivo treba stornirati
	racun -= pivo;
	// i dodati babic
	racun += babic;
	cout << racun << endl;
	//double	dbl = racun;
	//cout <<setprecision(2) <<fixed << dbl << " Kn" << endl;
}
