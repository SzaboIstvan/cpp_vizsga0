#include "Casette.h"
#include <iostream>

using namespace std;

Casette::Casette(char * _type, char * _name, int _length):Recorder(_type,_name)
{
	length = _length;
}

Casette::Casette(const Casette& cas):Recorder(cas)/*,length(cas.length)*/ {
	length = cas.length;
}

Casette & Casette::operator=(const Casette & other)
{
	if (&other != this)
	{
		Recorder::operator=(other);
		length = other.length;
	}

	return *this;
}

Casette::~Casette()
{
}

void Casette::Print()
{
	Recorder::Print();
	cout << " length: " << length;
}
