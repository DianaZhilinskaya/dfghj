#include "stdafx.h"
#include "Film.h"
#include <iostream>

using namespace std;

Film::Film()
{
	cout << "���������� ����������� ������(�����������)" << endl;
}
void Film::setgenre(char* genre)
{
	this->genre = genre;
}
void  Film::getgenre()
{
	cout << "�������� ������: : " << this->genre << endl;
}
Film::~Film()
{
	cout << "���������� ���������� ������" << endl;
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
