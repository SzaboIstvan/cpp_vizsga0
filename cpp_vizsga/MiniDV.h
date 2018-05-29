#pragma once
#include "VHS.h"

class MiniDV: public VHS
{
private:
	int memory;
public:
	MiniDV(char* _type, char* _name, int _length, int _mode, int _memory);
	MiniDV(const MiniDV& md);
	MiniDV& operator=(const MiniDV& other);
	~MiniDV();
	void Print();
};

