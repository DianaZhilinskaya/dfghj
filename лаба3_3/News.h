#pragma once 
#include "TP.h"
class News : public TP
{
	char* sort;
public:
	News();
	void setsort(char* sort);
	void getsort();
	~News();
	void show();
	void toConsole();
};