#include "DVD.h"
#include <iostream>

using namespace std;

DVD::DVD(char * _type, char * _name, int _capacity, int _pagesNum) : CD(_type, _name, _capacity)
{
	pagesNum = _pagesNum;
}

DVD::DVD(const DVD & dvd) : CD(dvd)
{
	pagesNum = dvd.pagesNum;
}

DVD & DVD::operator=(const DVD & other)
{
	if (&other != this)
	{
		CD::operator=(other);
		pagesNum = other.pagesNum;
	}

	return *this;
}


DVD::~DVD()
{
}

void DVD::Print()
{
	CD::Print();
	cout << " page count: " << pagesNum;
}
