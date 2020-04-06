#pragma once
using namespace std;
class R�wnaniaKwad
{
private:
	double a2, a1, a0; //Wsp�czynniki r�wnania kwadratowego
	double x1, x2;
public:
	R�wnaniaKwad(double _a0, double _a1, double _a2);
	~R�wnaniaKwad();
	double pobierz_a0();
	double pobierz_a1();
	double pobierz_a2();
	void ustaw_a0(double _a0);
	void ustaw_a1(double _a1);
	void ustaw_a2(double _a2);
	void wypisz();
	void policz();
};

