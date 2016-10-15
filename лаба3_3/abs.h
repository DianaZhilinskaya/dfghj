#pragma once
class abs//нельзя создавать обекты абстрактного класса
{
public:
	abs(){}
	virtual ~abs(){}
	virtual void  show() = 0;
	virtual void  toConsole() = 0;
};
