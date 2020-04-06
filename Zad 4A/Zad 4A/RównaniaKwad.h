#pragma once
using namespace std;
class RównaniaKwad
{
private:
	double a2, a1, a0; //Wspó³czynniki równania kwadratowego
	double x1, x2;
public:
	RównaniaKwad(double _a0, double _a1, double _a2);
	~RównaniaKwad();
	double pobierz_a0();
	double pobierz_a1();
	double pobierz_a2();
	void ustaw_a0(double _a0);
	void ustaw_a1(double _a1);
	void ustaw_a2(double _a2);
	void wypisz();
	void policz();
};

