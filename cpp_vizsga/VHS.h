#pragma once
#include "Casette.h"
class VHS: public Casette
{
private:
	int mode;
public:
	VHS(char* _type, char* _name, int _length, int _mode);
	virtual ~VHS();
	virtual void Print();
};

