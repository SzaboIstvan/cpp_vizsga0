#include "MiniDV.h"
#include <iostream>

using namespace std;


MiniDV::MiniDV(char * _type, char * _name, int _length, int _mode, int _memory) :VHS(_type, _name, _length, _mode)
{
	memory = _memory;
}

MiniDV::MiniDV(const MiniDV & md) : VHS(md)
{
	memory = md.memory;
}

MiniDV & MiniDV::operator=(const MiniDV & other)
{
	if (&other != this)
	{
		VHS::operator=(other);
		memory = other.memory;
	}

	return *this;
}


MiniDV::~MiniDV()
{
}

void MiniDV::Print()
{
	VHS::Print();
	cout << " memory type: " << memory;
}
