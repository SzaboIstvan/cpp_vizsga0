#include "VHS.h"
#include <iostream>

using namespace std;


VHS::VHS(char * _type, char * _name, int _length, int _mode):Casette(_type,_name,_length)
{
	mode = _mode;
}


VHS::~VHS()
{
}

void VHS::Print()
{
	Casette::Print();
	cout << " mode: " << mode;
}
