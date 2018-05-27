#include "Casette.h"
#include <iostream>

using namespace std;

Casette::Casette()
{
}


Casette::~Casette()
{
}

void Casette::Input(char * _type, char * _name, int _length)
{
	Recorder::Input(_type, _name);
	length = _length;
}

void Casette::Print()
{
	Recorder::Print();
	cout << " length: " << length;
}
