#pragma once 
#include "News.h"
class Advertisement : public News
{
	char* product;
public:
	Advertisement();
	void setproduct(char* product);
	void getproduct();
	~Advertisement();
	void show();
	void toConsole();
};