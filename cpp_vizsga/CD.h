#pragma once
#include "Recorder.h"

class CD : Recorder
{
private:
	int capacity;
public:
	CD();
	virtual ~CD();
	virtual void Input(char* _type, char* _name, int _capacity);
	virtual void Print();
};

