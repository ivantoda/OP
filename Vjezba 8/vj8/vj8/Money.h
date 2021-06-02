#pragma once
#include<iostream>

using namespace std;

class money {
	int kn;
	int lp;
public:
	money() { kn = 0; lp = 0;};
	money(int n = 0, int m = 0);
	friend money operator+(money c, money d);
	friend money operator-(money c, money d);
	money& operator+=(const money& a);
	money& operator-=(const money& a);
	friend ostream& operator<<(ostream& a, money& b);
	operator double() const { return double(kn) + double(lp / 100.0); };
	~money() {};
};