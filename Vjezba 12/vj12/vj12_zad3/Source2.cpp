#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<exception>
#include<string>

using namespace std;

class X {};

vector<int> citaj() {
	vector<int> a;
	ifstream f("brojevi.txt");
	if (f.is_open()) {
		string line;
		while (!f.eof()) {
			getline(f, line);
			if (stoi(line) <= 0 || line.find('.') != string::npos) {
				throw X();
			}
			a.push_back(stoi(line));
		}
	}
	f.close();
	return a;
}

bool sto(int i) {
	return i < 100;
}

int veci(vector<int> a) {
	return count_if(a.begin(), a.end(), [](int i) { return !sto(i); });
}

void brisi(vector<int> &a) {
	a.erase((remove_if(a.begin(), a.end(), sto)),a.end());
}

bool pr(int a, int b) {
	return a > b;
}

void sortira(vector<int>& a) {
	sort(a.begin(), a.end(),pr);
}

int main() {
	vector<int> a;
	try {
		a = citaj();
	}
	catch (X) 
	{
		cout << "Neprirodan broj u file-u!!";
	}
	cout << "Broj brojeva vecih od 100: " << veci(a)<<endl;
	brisi(a);
	sortira(a);
	ostream_iterator<int> os(cout, "\n");
	copy(a.begin(), a.end(), os);
}