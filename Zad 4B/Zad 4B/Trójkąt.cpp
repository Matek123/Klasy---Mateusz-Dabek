#include <iostream>
#include <iomanip>
#include "Trójk¹t.h"

using namespace std;

Trójk¹t::Trójk¹t(int _wiersze) {
	wiersze = _wiersze;
}
Trójk¹t::~Trójk¹t(){}
int Trójk¹t::pobierzWiersze() { return wiersze; }
void Trójk¹t::ustawWiersze(int _wiersze) { wiersze = _wiersze; }
int Trójk¹t::nastêpne_liczby(int obecny_wiersz,int pomocnicza) {
	if (pomocnicza == 0 || obecny_wiersz == pomocnicza)
	{
		return 1;
	}
	else
	{
		return nastêpne_liczby(obecny_wiersz - 1, pomocnicza - 1) + nastêpne_liczby(obecny_wiersz - 1, pomocnicza);
	}
}
void Trójk¹t::wypisz() {
	for (int n = 0; n <= wiersze; n++)
	{
		cout<< n << setw(3 * (wiersze - n))<<"";
		for (int i = 0; i <= n; i++)
		{
			cout << setw(6) << nastêpne_liczby(n, i);
		}
		cout << endl;
	}
}
