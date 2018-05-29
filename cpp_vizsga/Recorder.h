#pragma once
class Recorder
{
private:
	char* type;
	char* name;
public:
	Recorder(char* _type, char* _name);
	Recorder(const Recorder &rec);
	Recorder& operator=(const Recorder& other);
	virtual ~Recorder();
	virtual void Print();
	char* GetName();
};

