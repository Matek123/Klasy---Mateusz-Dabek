#include <iostream>
#include "R�wnaniaKwad.h"

using namespace std;
R�wnaniaKwad::R�wnaniaKwad(double _a0, double _a1, double _a2) {
	a0 = _a0;
	a1 = _a1;
	a2 = _a2;

}
R�wnaniaKwad::~R�wnaniaKwad() {}
double R�wnaniaKwad::pobierz_a0() { return a0; }
double R�wnaniaKwad::pobierz_a1() { return a1; }
double R�wnaniaKwad::pobierz_a2() { return a2; }
void R�wnaniaKwad::ustaw_a0(double _a0) { a0 = _a0; }
void R�wnaniaKwad::ustaw_a1(double _a1) { a1 = _a1; }
void R�wnaniaKwad::ustaw_a2(double _a2) { a2 = _a2; }
void R�wnaniaKwad:: wypisz() {
	cout <<"Rownanie: "<< a2 << "*x^2 + " << a1 << "*x + " << a0 << " = 0" << endl;
	if (a2 == 0 && a1 == 0)
	{
		if (a0 == 0)
		{
			cout << "Rownanie jest tozsamosciowe." << endl;
		}
		else
		{
			cout << "Rownanie nie ma rozwiazan." << endl;
		}
	}
	else
	{
		if (x1 == x1)
		{
			if (x1 == x2)
			{
				cout << "Rozwiazaniem jest x1 = x2 = " << x1 << endl;
			}
			else
			{
				cout << "Rozwiazaniami sa x1 = " << x1 << " i x2 = " << x2 << endl;
			}
		}
		else
		{
			cout << "Nie ma rozwiazan rzeczywistych." << endl;
		}
	}
}
void R�wnaniaKwad::policz() {
	if (a2 == 0)
	{
		if (a1 != 0)
		{
			x1 = x2 = (-a0) / a1;
		}
	}
	else
	{
		double delta = a1 * a1 - 4 * a2 * a0;
		if (delta != 0)
		{
			x1 = (-a1 - sqrt(delta)) / (2 * a2);
			x2 = (-a1 + sqrt(delta)) / (2 * a2);
		}
		else
		{
			x1 = (-a1) / (2 * a2);
			x2 = x1;
		}
	}
}