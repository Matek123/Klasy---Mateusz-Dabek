#include <iostream>
#include "Trójk¹t.h"
#include "Figury.h"

using namespace std;

Trójk¹t::Trójk¹t() {}
Trójk¹t::~Trójk¹t() {}
double Trójk¹t::pobierzbok1() { return bok1; }
double Trójk¹t::pobierzbok2() { return bok2; }
double Trójk¹t::pobierzbok3() { return bok3; }
double Trójk¹t::pobierzkat() { return kat; }
double Trójk¹t::pobierzwysokosc() { return wysokosc; }
double Trójk¹t::pobierzAx() { return Ax; }
double Trójk¹t::pobierzAy() { return Ay; }
double Trójk¹t::pobierzBx() { return Bx; }
double Trójk¹t::pobierzBy() { return By; }
double Trójk¹t::pobierzCx() { return Cx; }
double Trójk¹t::pobierzCy() { return Cy; }
void Trójk¹t::ustawbok1(double _bok1) { bok1 = _bok1; }
void Trójk¹t::ustawbok2(double _bok2) { bok2 = _bok2; }
void Trójk¹t::ustawbok3(double _bok3) { bok3 = _bok3; }
void Trójk¹t::ustawkat(double _kat) { kat = _kat; }
void Trójk¹t::ustawwysokosc(double _wysokosc) { wysokosc = _wysokosc; }
void Trójk¹t::ustawAx(double _Ax) { Ax = _Ax; }
void Trójk¹t::ustawAy(double _Ay) { Ay = _Ay; }
void Trójk¹t::ustawBx(double _Bx) { Bx = _Bx; }
void Trójk¹t::ustawBy(double _By) { By = _By; }
void Trójk¹t::ustawCx(double _Cx) { Cx = _Cx; }
void Trójk¹t::ustawCy(double _Cy) { Cy = _Cy; }
double Trójk¹t::Pole_3boki() {
	double p = Policz_obwod() / 2;
	return sqrt(p * (p - bok1) * (p - bok2) * (p - bok3));
}
double Trójk¹t::Pole_2boki_kat(){
	return 0.5 * bok1 * bok2 * sin(kat / 180 * 3.1415);
}
double Trójk¹t::Pole_bok_wysokosc(){
	return 0.5 * wysokosc * bok1;
}
double Trójk¹t::Pole_w_uk³adzie_wspó³() {
	return 0.5 * abs((Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax));
}
double Trójk¹t::Policz_obwod(){
	return bok1 + bok2 + bok3;
}
