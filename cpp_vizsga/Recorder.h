#pragma once
class Recorder
{
private:
	char* type;
	char* name;
public:
	Recorder(char* _type, char* _name);
	virtual ~Recorder();
	virtual void Print();
	char* GetName();
};

