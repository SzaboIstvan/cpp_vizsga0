#include "CD.h"
#include <iostream>

using namespace std;

CD::CD()
{
}


CD::~CD()
{
}

void CD::Input(char * _type, char * _name, int _capacity)
{
}

void CD::Print()
{
	Recorder::Print();
	cout << " Capacity: " << capacity;
}
