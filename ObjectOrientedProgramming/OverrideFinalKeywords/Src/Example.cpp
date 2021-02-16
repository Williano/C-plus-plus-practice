#include "Derived.h"


int main()
{
	Base* b = new Derived();
	Derived* d = new Derived();

	b->functionA(99);
	d->functionA(99);

	return 0;
}
