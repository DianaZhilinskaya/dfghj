#include "stdafx.h"
#include "TP.h"
#include <iostream>

using namespace std;

TP::TP()
{
	cout << "���������� ����������� ������������� ���������(������� �����)" << endl;
}
void TP::settime(char* time)
{
	this->time = time;
}
void TP::gettime()
{
	cout << "����� ������: " << this->time << endl;
}
void TP::setname(char* name)
{
	this->name = name;
}
void TP::getname()
{
	cout << "�������� ���������: " << this->name << endl;
}
TP::~TP()
{
	cout << "���������� ���������� ������������� ���������" << endl;
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