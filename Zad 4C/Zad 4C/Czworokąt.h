#pragma once
#include "Figury.h"
class Czworok¹t :
	public Figury
{private:
	int istnieje; //Zmienna pomocnicza do stworzenia obiektu typu klasa
	double bok1, bok2, bok3, bok4;
	double przek1, przek2;
	double kat;
	double wysokosc;
public:
	Czworok¹t(int _is);
	~Czworok¹t();
	double pobierzbok1();
	double pobierzbok2();
	double pobierzbok3();
	double pobierzbok4();
	double pobierzkat();
	double pobierzwysokosc();
	double pobierzprzek1();
	double pobierzprzek2();
	void ustawbok1(double _bok1);
	void ustawbok2(double _bok2);
	void ustawbok3(double _bok3);
	void ustawbok4(double _bok4);
	void ustawkat(double _kat);
	void ustawwysokosc(double _wysokosc);
	void ustawprzek1(double _przek1);
	void ustawprzek2(double _przek2);
	double Pole_Dowolny();
	double Pole_2boki();
	double Pole_bok_wys();
	double Policz_Obwod();
};

