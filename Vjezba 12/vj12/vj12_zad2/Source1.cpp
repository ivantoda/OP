#include<iostream>
#include<algorithm>
#include<iterator>

using namespace std;

template < class T, size_t N > 
class arr {
	T t[N];
public:
	arr(int n) {
		fill(begin(t),end(t), n);		
	}
	auto begin_i() {
		return begin(t);
	};
	auto end_i() {
		return end(t);
	};
	T& operator[](int a){
		if (a >= N) {
			cout << "Array index out of bound, exiting";
			exit(0);
		}
		return t[a];
	}
	T& operator+=(int m) {
		return this->t+m;
	}
	
};

int main() {
	ostream_iterator<short> os(std::cout, " ");
	arr<short, 10> a(4);
	a[0] = a[2] += 5;
	copy(a.begin_i(),a.end_i(), os);
}