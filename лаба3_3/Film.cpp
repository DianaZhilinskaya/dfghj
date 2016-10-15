#include "stdafx.h"
#include "Film.h"
#include <iostream>

using namespace std;

Film::Film()
{
	cout << "Вызывается конструктор фильма(производный)" << endl;
}
void Film::setgenre(char* genre)
{
	this->genre = genre;
}
void  Film::getgenre()
{
	cout << "название фильма: : " << this->genre << endl;
}
Film::~Film()
{
	cout << "Вызывается деструктор фильма" << endl;
}

void Film::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}
void Film::show()
{
	this->getgenre();
	this->getname();
	this->gettime();
}
