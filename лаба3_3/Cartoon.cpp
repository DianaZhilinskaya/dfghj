#include "stdafx.h"
#include "Cartoon.h"
#include <iostream>

using namespace std;

Cartoon::Cartoon()
{
	cout << "Вызывается конструктор мультфильма(производный)" << endl;
}
void Cartoon::setkolch(char* kolch)
{
	this->kolch = kolch;
}
void Cartoon::getkolch()
{
	cout << "количесвто частей: " << this->kolch << endl;
}
Cartoon::~Cartoon()
{
	cout << "Вызывается деструктор мультфильма" << endl;
}
void Cartoon::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}
void Cartoon::show()
{
	this->getkolch();
	this->getgenre();
	this->getname();
	this->gettime();
}