#include "stdafx.h"
#include "TP.h"
#include <iostream>

using namespace std;

TP::TP()
{
	cout << "Вызывается конструктор телевизионной программы(базовый класс)" << endl;
}
void TP::settime(char* time)
{
	this->time = time;
}
void TP::gettime()
{
	cout << "время показа: " << this->time << endl;
}
void TP::setname(char* name)
{
	this->name = name;
}
void TP::getname()
{
	cout << "название программы: " << this->name << endl;
}
TP::~TP()
{
	cout << "Вызывается деструктор телевизионной программы" << endl;
}
void TP::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}

void TP::show()
{
	this->getname();
	this->gettime();
}