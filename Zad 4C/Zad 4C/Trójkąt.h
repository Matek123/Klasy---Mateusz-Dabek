#pragma once
#include "Figury.h"
class Tr�jk�t :
	public Figury
{private:
	double bok1, bok2, bok3;
	double kat;
	double wysokosc;
	double Ax, Ay, Bx, By, Cx, Cy;
public:
	Tr�jk�t();
	~Tr�jk�t();
	double pobierzbok1();
	double pobierzbok2();
	double pobierzbok3();
	double pobierzkat();
	double pobierzwysokosc();
	double pobierzAx();
	double pobierzAy();
	double pobierzBx();
	double pobierzBy();
	double pobierzCx();
	double pobierzCy();
	void ustawbok1(double _bok1);
	void ustawbok2(double _bok2);
	void ustawbok3(double _bok3);
	void ustawkat(double _kat);
	void ustawwysokosc(double _wysokosc);
	void ustawAx(double _Ax);
	void ustawAy(double _Ay);
	void ustawBx(double _Bx);
	void ustawBy(double _By);
	void ustawCx(double _Cx);
	void ustawCy(double _Cy);
	double Pole_3boki();
	double Pole_2boki_kat();
	double Pole_bok_wysokosc();
	double Pole_w_uk�adzie_wsp�();
	double Policz_obwod();

};


