#include "CD.h"
#include <iostream>

using namespace std;

CD::CD(char * _type, char * _name, int _capacity) : Recorder(_type,_name)
{
	capacity = _capacity;
}


CD::~CD()
{
}

void CD::Print()
{
	Recorder::Print();
	cout << " Capacity: " << capacity;
}
