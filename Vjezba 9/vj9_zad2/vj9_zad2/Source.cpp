#include"Stack.h"

int main(){
	Stack <double> a;
	a.push(15.1);
	a.push(4.2);
	a.push(3.1);
	a.push(3.0);
	a.pop();
	a.print();
	std::cout << a.is_empty() << std::endl;
}