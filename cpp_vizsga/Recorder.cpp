#include <string.h>
#include <iostream>
#include "Recorder.h"
#pragma warning(disable : 4996) //strcpy

using namespace std;

Recorder::Recorder(char * _type, char * _name)
{
	type = new char[10];
	strcpy(type, _type);

	name = new char[40];
	strcpy(name, _name);
}


Recorder::~Recorder()
{
	delete[] type;
	delete[] name;
}

void Recorder::Print()
{
	cout << "Type: " << type << " Name: " << name;
}

char* Recorder::GetName()
{
	return name;
}
