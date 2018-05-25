#pragma once
#include "Casette.h"
class VHS:Casette
{
private:
	int mode;
public:
	VHS();
	virtual ~VHS();
	virtual void Input(char* _type, char* _name, int _length, int _mode);
	virtual void Print();
};

