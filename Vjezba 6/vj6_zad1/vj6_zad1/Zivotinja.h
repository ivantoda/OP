#pragma once
#include<iostream>
#include<string>

using namespace std;

class Zivotinja {
	public:
		virtual int broj_nogu() = 0;
		virtual string vrsta() = 0;
		virtual ~Zivotinja() = 0;
};

class Kukac : public Zivotinja {
	int br_nogu_k;
	string vrsta_k;
public:
	Kukac() { br_nogu_k = 6; };
	virtual int broj_nogu();
	virtual string vrsta();
	virtual ~Kukac();
};

class Pauk : public Zivotinja {
	int br_nogu_p;
	string vrsta_p;
public:
	Pauk() { br_nogu_p = 8; }
	virtual int broj_nogu();
	virtual string vrsta();
	virtual ~Pauk();
};

class Ptica : public Zivotinja {
	int br_nogu_t;
	string vrsta_t;
public:
	Ptica() { br_nogu_t = 2; }
	virtual int broj_nogu();
	virtual string vrsta();
	virtual ~Ptica();
};

class Zohar : public Kukac {
public:
	virtual string vrsta();
	virtual ~Zohar();
};

class Tarantula : public Pauk {
public:
	virtual string vrsta();
	virtual ~Tarantula();
};

class Vrabac : public Ptica {
public:
	virtual string vrsta();
	virtual ~Vrabac();
};

class Brojac {
		int ukup_broj;
	public:
		Brojac() { ukup_broj = 0; };
		virtual void Br(Zivotinja& a);
		virtual void print();
		virtual ~Brojac() {}
};