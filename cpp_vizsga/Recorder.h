#pragma once
class Recorder
{
private:
	char* type;
	char* name;
public:
	Recorder();
	virtual ~Recorder();
	virtual void Input(char* _type, char* _name);
	virtual void Print();
};

