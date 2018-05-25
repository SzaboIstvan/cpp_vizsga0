#pragma once
#include "VHS.h"

class MiniDV:VHS
{
private:
	int memory;
public:
	MiniDV();
	~MiniDV();
	void Input(char* _type, char* _name, int _length, int _mode, int _memory);
	void Print();
};

