#include <iostream>
#include "Tr�jk�t.h"
#include "Figury.h"

using namespace std;

Tr�jk�t::Tr�jk�t() {}
Tr�jk�t::~Tr�jk�t() {}
double Tr�jk�t::pobierzbok1() { return bok1; }
double Tr�jk�t::pobierzbok2() { return bok2; }
double Tr�jk�t::pobierzbok3() { return bok3; }
double Tr�jk�t::pobierzkat() { return kat; }
double Tr�jk�t::pobierzwysokosc() { return wysokosc; }
double Tr�jk�t::pobierzAx() { return Ax; }
double Tr�jk�t::pobierzAy() { return Ay; }
double Tr�jk�t::pobierzBx() { return Bx; }
double Tr�jk�t::pobierzBy() { return By; }
double Tr�jk�t::pobierzCx() { return Cx; }
double Tr�jk�t::pobierzCy() { return Cy; }
void Tr�jk�t::ustawbok1(double _bok1) { bok1 = _bok1; }
void Tr�jk�t::ustawbok2(double _bok2) { bok2 = _bok2; }
void Tr�jk�t::ustawbok3(double _bok3) { bok3 = _bok3; }
void Tr�jk�t::ustawkat(double _kat) { kat = _kat; }
void Tr�jk�t::ustawwysokosc(double _wysokosc) { wysokosc = _wysokosc; }
void Tr�jk�t::ustawAx(double _Ax) { Ax = _Ax; }
void Tr�jk�t::ustawAy(double _Ay) { Ay = _Ay; }
void Tr�jk�t::ustawBx(double _Bx) { Bx = _Bx; }
void Tr�jk�t::ustawBy(double _By) { By = _By; }
void Tr�jk�t::ustawCx(double _Cx) { Cx = _Cx; }
void Tr�jk�t::ustawCy(double _Cy) { Cy = _Cy; }
double Tr�jk�t::Pole_3boki() {
	double p = Policz_obwod() / 2;
	return sqrt(p * (p - bok1) * (p - bok2) * (p - bok3));
}
double Tr�jk�t::Pole_2boki_kat(){
	return 0.5 * bok1 * bok2 * sin(kat / 180 * 3.1415);
}
double Tr�jk�t::Pole_bok_wysokosc(){
	return 0.5 * wysokosc * bok1;
}
double Tr�jk�t::Pole_w_uk�adzie_wsp�() {
	return 0.5 * abs((Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax));
}
double Tr�jk�t::Policz_obwod(){
	return bok1 + bok2 + bok3;
}
