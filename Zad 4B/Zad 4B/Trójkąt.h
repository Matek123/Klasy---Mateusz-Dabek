#pragma once
class Tr�jk�t
{
private:
	int wiersze; //Liczba wierszy
public:
	Tr�jk�t(int _wiersze);
	~Tr�jk�t();
	int pobierzWiersze();
	void ustawWiersze(int _wierszy);
	int nast�pne_liczby(int obecny_wiersz, int pomocnicza);
	void wypisz();
};

