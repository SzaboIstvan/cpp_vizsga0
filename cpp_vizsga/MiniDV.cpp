#include "MiniDV.h"
#include <iostream>

using namespace std;


MiniDV::MiniDV()
{
}


MiniDV::~MiniDV()
{
}

void MiniDV::Input(char * _type, char * _name, int _length, int _mode, int _memory)
{
	VHS::Input(_type, _name, _length, _mode);
	memory = _memory;
}

void MiniDV::Print()
{
	VHS::Print();
	cout << " memory type: " << memory;
}
