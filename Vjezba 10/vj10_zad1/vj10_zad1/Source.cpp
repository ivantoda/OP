#include<iostream>
#include<string>
#include"provjera.h"

using namespace std;

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int operand() {
    cout << "Unesite broj:" << endl;
    string num;
    const char newline = '\n';
    std::getline(cin, num);
    if (!num.empty() && is_number(num)) {
        return stoi(num);
    }
    else
        throw inter();
}

string operatori() {
    cout << "Unesite operand:" << endl;
    string o;
    const char newline = '\n';
    std::getline(cin, o);
    if (!o.empty() && (o == "+" || o == "-" || o == "*" || o == "/")) {
        return o;
    }
    else
        throw oper();
}

void rez(double a, double b, string c) {
   if (b == 0) { throw ZeroDivide(); }
   else {
    if (c == "+") {
        cout << a << "+" << b << "=" << (a + b)<< endl;
    }
    else if (c == "-") {
        cout << a << "-" << b << "=" << (a - b)<< endl;
    }
    else if (c == "*") {
        cout << a << "*" << b << "=" << (a * b)<< endl;
    }
    else if (c == "/") {
        cout << a << "/" << b << "=" << (a / b) << endl;
    }
}        
}

int main() {
	double a,b;
	string op;
    while (1)
    {
        try {
            a = operand();
            b = operand();
            op = operatori();
            rez(double(a), double(b), op);
        }
        catch (MathErr& er1) {
            er1.ShowError();
            break;
        }
    }
	}