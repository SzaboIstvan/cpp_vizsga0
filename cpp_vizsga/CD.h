#pragma once
#include "Recorder.h"

class CD : public Recorder
{
private:
	int capacity;
public:
	CD(char* _type, char* _name, int _capacity);
	virtual ~CD();
	virtual void Print();
};

