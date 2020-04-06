#pragma once
class Trójk¹t
{
private:
	int wiersze; //Liczba wierszy
public:
	Trójk¹t(int _wiersze);
	~Trójk¹t();
	int pobierzWiersze();
	void ustawWiersze(int _wierszy);
	int nastêpne_liczby(int obecny_wiersz, int pomocnicza);
	void wypisz();
};

