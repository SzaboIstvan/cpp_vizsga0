#pragma once
#include "Recorder.h"
class Casette: public Recorder
{
private:
	int length;
public:
	Casette(char* _type, char* _name, int _length);
	Casette(const Casette& cas);
	Casette& operator=(const Casette& other);
	virtual ~Casette();
	virtual void Print();
};

