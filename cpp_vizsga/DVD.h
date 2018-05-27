#pragma once
#include "CD.h"

class DVD : public CD
{
private:
	int pagesNum;
public:
	DVD();
	~DVD();
	void Input(char* _type, char* _name, int _capacity, int _pagesNum);
	void Print();

};

