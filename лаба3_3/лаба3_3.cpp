// лаба3_3.cpp: определяет точку входа для консольного приложения.
//Классы – Телевизинная программа, Фильм, Новости, Худ. фильм, Мультфильм, Реклама, Режиссер.

#include "stdafx.h"
#include <iostream>
#include "TP.h"
#include "Film.h"
#include "News.h"
#include "HF.h"
#include "Cartoon.h"
#include "Advertisement.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	HF::Director::film2();
	Film rembo;
	rembo.setgenre("Боевик");
	rembo.setname("Рембо");
	rembo.settime("12:15");
	rembo.toConsole();
	/*int v=0,n=0;
	for (;;){
		TP p;
		p.settime("11.30");
		p.gettime();
		cout << endl;
		cout << "Вы хотите новости(1) или фильм(2)?" << endl;
		cin >> n;
		if (n == 1)
		{
			p.setname("Новости");
			p.getname();
			cout << endl;
			cout << "_________________________\n";
			{News r;
			r.setsort("новости спорта");
			r.getsort();
			cout << endl; 
			}
			cout << "_________________________\n";
			{Advertisement t;
			t.setproduct("кошачий корм");
			t.getproduct();
			}
		}
		if (n == 2){
			p.setname("Фильм");
			p.getname();
			cout << endl;
			cout << "_________________________\n";
			{Film o;
			o.setgenre("Фентези");
			o.getgenre();
			}
			cout << endl;
			cout << "_________________________\n";
			cout <<"Вы хотите художественный фильм(1) или мультфильм(2)";
			cin >> v;
			if (v == 1)
			{
				{ HF u;
				u.setkategorii("детское");
				u.getkategorii();
				{u.D.setname2("Орехов Игнатий Афанасьевич");
				u.D.getname2();
				u.D.setage("30");
				u.D.getage(); 
				cout << u.prov() << endl;
				}
				}
			}
			if (v == 2)
			{
				{ Cartoon i;
				i.setkolch("2");
				i.getkolch();
				}
			}cout << "_________________________\n";
		}
	}
	cout << endl;
	*/
	return 0;
}

