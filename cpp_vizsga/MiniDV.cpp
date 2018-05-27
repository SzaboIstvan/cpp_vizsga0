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
}

void MiniDV::Print()
{
	VHS::Print();
	cout << " memory type: " << memory;
}
