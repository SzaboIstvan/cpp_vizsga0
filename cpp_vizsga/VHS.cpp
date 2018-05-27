#include "VHS.h"
#include <iostream>

using namespace std;


VHS::VHS()
{
}


VHS::~VHS()
{
}

void VHS::Input(char * _type, char * _name, int _length, int _mode)
{
}

void VHS::Print()
{
	Casette::Print();
	cout << " mode: " << mode;
}
