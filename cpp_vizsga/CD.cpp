#include "CD.h"
#include <iostream>

using namespace std;

CD::CD(char * _type, char * _name, int _capacity) : Recorder(_type, _name)
{
	capacity = _capacity;
}

CD::CD(const CD & cd) : Recorder(cd)
{
	capacity = cd.capacity;
}

CD & CD::operator=(const CD & other)
{
	if (&other != this)
	{
		Recorder::operator=(other);
		capacity = other.capacity;
	}

	return *this;
}


CD::~CD()
{
}

void CD::Print()
{
	Recorder::Print();
	cout << " Capacity: " << capacity;
}
