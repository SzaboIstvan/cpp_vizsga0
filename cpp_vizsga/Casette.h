#pragma once
#include "Recorder.h"
class Casette: public Recorder
{
private:
	int length;
public:
	Casette();
	virtual ~Casette();
	virtual void Input(char* _type, char* _name, int _length);
	virtual void Print();
};

