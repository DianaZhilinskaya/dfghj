#pragma once 
#include "abs.h"
class TP:virtual public abs
{
	char* time;
	char* name;
public:
	TP();
	void settime(char* time);
    void gettime();
	void setname(char* name);
	void getname();
	~TP();
	void show();
	void toConsole();
};