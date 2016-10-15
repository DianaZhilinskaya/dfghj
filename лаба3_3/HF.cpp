#include "stdafx.h"
#include "HF.h"
#include <iostream>
using namespace std;

HF::HF()
{
	cout << "Вызывается конструктор художественного фильма" << endl;
}

void HF::setkategorii(char* kategorii)
{
	this->kategorii = kategorii;
}

char HF::getkategorii()
{
	cout << "категория художественного фильма: " << this->kategorii << endl;
	return 0;
}

HF::~HF()
{
	cout << "Вызывается деструктор художественного фильма(производный)" << endl;
}

HF::Director::Director()
{
	cout << "Вызывается конструктор режисера(производный, вложенный)" << endl;
}

void HF::Director::setname2(char* name2)
{
	this->name2 = name2;
}

char *HF::Director::getname2()
{
	cout << "Имя, фамилия и отчество режисера: " << this->name2 << endl;
	return  this->name2;
}

void HF::Director::setage(char* age)
{
	this->age = age;
}

char HF::Director::getage()
{
	cout << "Возраст режисера: " << this->age << endl;
	return 0;
}

HF::Director::~Director()
{
	cout << "Вызывается деструктор художественного фильма" << endl;
}
bool HF::prov()
{

	return(this->D.getname2()!=NULL);
}

HF HF::Director::film2()
{
	HF M;
	M.setgenre("Фентези");
	M.setkategorii("семейное");
	M.setname("Большой и добрый великан");
	M.settime("12.00");
	M.show();
	return M;
}

void HF::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}
void HF::show()
{
	this->getgenre();
	this->getkategorii();
	this->getname();
	this->gettime();
}




