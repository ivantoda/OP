#pragma once
#include<iostream>
#include<string>
#include<fstream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class file{
	FILE* os;
public:
	file(string a) {
		std::ofstream os("errors.log", std::ios_base::out | std::ios_base::app);
		time_t now = time(0);
		tm now_tm = {};
		char str[26] = {};
		localtime_s(&now_tm, &now);
		asctime_s(str, 26, &now_tm);
		os << str << a;
		os.close();
	};
};

class MathErr{
public:
	virtual void ShowError() = 0;
};

class ZeroDivide : public MathErr {
public:
	void ShowError() { file c("Dijeljenje s nulom."); }
};

class inter : public MathErr {
public:
	void ShowError() { file c("Niste unijeli broj."); }
};

class oper : public MathErr {
public:
	void ShowError() {file c("Niste unijeli pravi operand."); }
};
