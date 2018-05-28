#include "Casette.h"
#include <iostream>

using namespace std;

Casette::Casette(char * _type, char * _name, int _length):Recorder(_type,_name)
{
	length = _length;
}


Casette::~Casette()
{
}

void Casette::Print()
{
	Recorder::Print();
	cout << " length: " << length;
}
