#pragma once
#include<iostream>

template <typename T>
class Stack {
	T* p;
	int n;
public:
	Stack() { n = 0; p = new T[1];};
	Stack(int m) { p = new T[m]; n = m; };
	void print();
	void push(T a);
	void pop();
	bool is_empty();
};

template<typename T> void Stack<T>::push(T a) {
	
	T* nArr = new T[n + 1];
	for (int i = 0; i < n; ++i) {
		nArr[i] = p[i];
	}
	delete[] p;
	nArr[n] = a;
	p = new T[n + 1];
	for (int i = 0; i < n+1; ++i) {
		p[i] = nArr[i];
	}
	n++;
	delete[] nArr;
}

template<typename T> void Stack<T>::pop() {
	T* nArr = new T[n-1];
	for (int i = 0; i < n - 1; ++i) {
		nArr[i] = p[i];
	}
	delete[] p;
	p = new T[n - 1];
	for (int i = 0; i < n - 1; ++i) {
		p[i] = nArr[i];
	}
	n--;
	delete[] nArr;
	
}

template<typename T> bool Stack<T>::is_empty() {
	for (int i = 0; i < n; ++i)
		if (p[i]) return 0;
	return 1;
}

template<typename T> void Stack<T>::print() {
	for (int i = 0; i < n; ++i) {
		std::cout << p[i] << std::endl;
	}
}