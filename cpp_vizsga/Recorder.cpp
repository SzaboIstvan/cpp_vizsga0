#include <string.h>
#include <iostream>
#include "Recorder.h"

using namespace std;

Recorder::Recorder()
{
}


Recorder::~Recorder()
{
	delete[] type;
	delete[] name;
}

void Recorder::Input(char * _type, char * _name)
{
	type = new char[10];
	strcpy(type, _type);

	name = new char[10];
	strcpy(name, _name);
}

void Recorder::Print()
{
	cout << "Type: " << type << " Name: " << name;
}
