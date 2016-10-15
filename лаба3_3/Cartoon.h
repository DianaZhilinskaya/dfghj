#pragma once 
#include "Film.h"
class Cartoon : public Film
{
	char* kolch;
public:
	Cartoon();
	void setkolch(char* kolch);
	void getkolch();
	~Cartoon();
	void show();
	void toConsole();
};