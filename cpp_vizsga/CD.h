#pragma once
#include "Recorder.h"

class CD : public Recorder
{
private:
	int capacity;
public:
	CD(char* _type, char* _name, int _capacity);
	CD(const CD& cd);
	CD& operator=(const CD& other);
	virtual ~CD();
	virtual void Print();
};

