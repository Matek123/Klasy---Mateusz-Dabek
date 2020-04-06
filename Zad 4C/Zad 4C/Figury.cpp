#include "Figury.h"

Figury::Figury() {};
Figury::~Figury() {};
double Figury::pobierzObwod() { return Obwod; }
double Figury::pobierzPole() { return Pole; }
void Figury::ustawObwod(double _obwod) { Obwod = _obwod; }
void Figury::ustawPole(double _pole) { Pole = _pole; }
void wypisz(){}