#pragma once
#include "CD.h"

class DVD : public CD
{
private:
	int pagesNum;
public:
	DVD(char* _type, char* _name, int _capacity, int _pagesNum);
	~DVD();
	void Print();

};

