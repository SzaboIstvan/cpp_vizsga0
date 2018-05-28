#include "DVD.h"
#include <iostream>

using namespace std;

DVD::DVD(char * _type, char * _name, int _capacity, int _pagesNum) : CD(_type, _name, _capacity)
{
	pagesNum = _pagesNum;
}


DVD::~DVD()
{
}

void DVD::Print()
{
	CD::Print();
	cout << " page count: " << pagesNum;
}
