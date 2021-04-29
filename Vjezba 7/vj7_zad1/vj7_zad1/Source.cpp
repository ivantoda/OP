#include"vehicle.h"

using namespace std;

int main(void)
{
	counter c;
	vehicle* v[] = { new catamaran(30), new ferry(10, 5, 3), new seaplane(15) };
	size_t sz = sizeof v / sizeof v[0];
	for (unsigned i = 0; i < sz; ++i)
		c.add(v[i]);
	cout << "ukupno " << c.total() << " putnika" << std::endl;
	for (unsigned i = 0; i < sz; ++i)
		delete v[i];
}