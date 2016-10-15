#pragma once
#include "Film.h"

class Comedy:protected Film
{
protected:
	int ogranich;

public:
	void setOgranich();
	int getOgranich();
};
class pricol :public Comedy
{
	char* kolminut;
public:
	void setkolminut();
	int getkolminut();
};