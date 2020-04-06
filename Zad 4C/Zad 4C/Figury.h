#pragma once
class Figury
{
protected:
	double Obwod;
	double Pole;
public:
	Figury();
	~Figury();
	double pobierzObwod();
	double pobierzPole();
	void ustawObwod(double _obwod);
	void ustawPole(double _pole);
	void wypisz();
	
};

