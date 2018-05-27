#include "DVD.h"
#include <iostream>

using namespace std;

DVD::DVD()
{
}


DVD::~DVD()
{
}

void DVD::Input(char * _type, char * _name, int _capacity, int _pagesNum)
{
	CD::Input(_type, _name, _capacity);
	pagesNum = _pagesNum;
}

void DVD::Print()
{
	CD::Print();
	cout << " page count: " << pagesNum;
}
