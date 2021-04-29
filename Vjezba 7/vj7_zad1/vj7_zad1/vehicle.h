#pragma once
#include<iostream>
#include<string>

using namespace std;

class vehicle {
public:
	virtual string type() = 0;
	virtual unsigned int passangers() = 0;
	virtual ~vehicle() = 0;
};

class aircraft : virtual public vehicle {
public:
	virtual string type();
};

class watercraft : virtual public vehicle {
public:
	virtual string type();
};

class ferry : public watercraft {
	int br_putnika_f;
	int br_bicikla;
	int br_automobila;
public:
	ferry() { br_putnika_f = 0; br_bicikla = 0; br_automobila = 0; };
	ferry(int br_putnika, int br_bicikla, int br_automobila);
	virtual unsigned int passangers();
	virtual string type();
	~ferry() {};
};

class catamaran : public watercraft {
	int br_putnika_c;
public:
	virtual string type();
	catamaran() { br_putnika_c = 0; };
	catamaran(int br_putnika);
	virtual unsigned int passangers();
	virtual ~catamaran() {};
};

class seaplane : public aircraft, public watercraft{
	int br_putnika_s;
public:
	seaplane() { br_putnika_s = 0; };
	seaplane(int a);
	virtual string type();
	virtual unsigned int passangers();
	virtual ~seaplane() {};
};

class counter {
	int ukup_br;
public:
	counter(){ ukup_br = 0; };
	void add(vehicle *a);
	int total();
	virtual ~counter() {};
};