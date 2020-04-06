#include <iostream>
#include <iomanip>
#include "Tr�jk�t.h"

using namespace std;

Tr�jk�t::Tr�jk�t(int _wiersze) {
	wiersze = _wiersze;
}
Tr�jk�t::~Tr�jk�t(){}
int Tr�jk�t::pobierzWiersze() { return wiersze; }
void Tr�jk�t::ustawWiersze(int _wiersze) { wiersze = _wiersze; }
int Tr�jk�t::nast�pne_liczby(int obecny_wiersz,int pomocnicza) {
	if (pomocnicza == 0 || obecny_wiersz == pomocnicza)
	{
		return 1;
	}
	else
	{
		return nast�pne_liczby(obecny_wiersz - 1, pomocnicza - 1) + nast�pne_liczby(obecny_wiersz - 1, pomocnicza);
	}
}
void Tr�jk�t::wypisz() {
	for (int n = 0; n <= wiersze; n++)
	{
		cout<< n << setw(3 * (wiersze - n))<<"";
		for (int i = 0; i <= n; i++)
		{
			cout << setw(6) << nast�pne_liczby(n, i);
		}
		cout << endl;
	}
}
