#include <iostream>
#include "Czworok�t.h"
#include "Figury.h"
using namespace std;

Czworok�t::Czworok�t(int _is) { istnieje = _is; }
Czworok�t::~Czworok�t() {}
double Czworok�t::pobierzbok1() { return bok1; }
double Czworok�t::pobierzbok2() { return bok2; }
double Czworok�t::pobierzbok3() { return bok3; }
double Czworok�t::pobierzbok4() { return bok4; }
double Czworok�t::pobierzkat() { return kat; }
double Czworok�t::pobierzwysokosc() { return wysokosc; }
double Czworok�t::pobierzprzek1() { return przek1; }
double Czworok�t::pobierzprzek2() { return przek2; }
void Czworok�t::ustawbok1(double _bok1) { bok1 = _bok1; }
void Czworok�t::ustawbok2(double _bok2) { bok2 = _bok2; }
void Czworok�t::ustawbok3(double _bok3) { bok3 = _bok3; }
void Czworok�t::ustawbok4(double _bok4) { bok4 = _bok4; }
void Czworok�t::ustawkat(double _kat) { kat = _kat; }
void Czworok�t::ustawwysokosc(double _wysokosc) { wysokosc = _wysokosc; }
void Czworok�t::ustawprzek1(double _przek1) { przek1 = _przek1; }
void Czworok�t::ustawprzek2(double _przek2) { przek2 = _przek2; }
double Czworok�t::Pole_Dowolny(){
	return 0.5 * przek1 * przek2 * sin(kat / 180 * 3.1415);
}
double Czworok�t::Pole_2boki(){
	return bok1 * bok2 * sin(kat / 180 * 3.1415);
}
double Czworok�t::Pole_bok_wys(){
	return bok1 * wysokosc;
}
double Czworok�t::Policz_Obwod(){
	return bok1 + bok2 + bok3 + bok4;
}