#include <iostream>
#include "Trójkąt.h"
#include "Czworokąt.h"
using namespace std;

int main()
{
    int opcja1, opcja2, opcja3;
    int zmienna_zamienna;
    char warunek;
    do {
        cout << "Wybierz figure, ktroej chcesz policzyc pole lub obwod:" << endl;
        cout << "1. Trojkat\n2. Czworokat\n";
        cin >> opcja1;
        cout << "Co chcesz policzyć?\n1. Pole\n2. Obwod" << endl;
        cin >> opcja2;
        switch (opcja1)
        {
        case 1: {
            Trójkąt troj(1);
            switch (opcja2)
            {
            case 1:
                cout << "Jaka metoda (korzystajac z jakich danych):\n1. 1/2*bok1*bok2*sin(kat pomiedzy bokami)\n2. Wzor Herona (korzystajac z 3 bokow)\n3. 1/2*bok*H (bok i wysokosc na niego padajaca)";
                cout << "\n4. Trojkat w ukladzie kartezjanskim (korzystajac ze wspolrzednych wierzcholkow)" << endl;
                cin >> opcja3;
                switch (opcja3)
                {
                case 1:
                    cout << "Podaj dane:\nbok1: "; cin >> zmienna_zamienna; troj.ustawbok1(zmienna_zamienna);
                    cout << "bok2: "; cin >> zmienna_zamienna; troj.ustawbok2(zmienna_zamienna);
                    cout << "kat (w stopniach): "; cin >> zmienna_zamienna; troj.ustawkat(zmienna_zamienna);
                    troj.ustawPole(troj.Pole_2boki_kat());
                    break;
                case 2:
                    cout << "Podaj dane:\nbok1: "; cin >> zmienna_zamienna; troj.ustawbok1(zmienna_zamienna);
                    cout << "bok2: "; cin >> zmienna_zamienna; troj.ustawbok2(zmienna_zamienna);
                    cout << "bok3: "; cin >> zmienna_zamienna; troj.ustawbok3(zmienna_zamienna);
                    troj.ustawPole(troj.Pole_3boki());
                    break;
                case 3:
                    cout << "Podaj dane:\nbok: "; cin >> zmienna_zamienna; troj.ustawbok1(zmienna_zamienna);
                    cout << "Wysokosc: "; cin >> zmienna_zamienna; troj.ustawwysokosc(zmienna_zamienna);
                    troj.ustawPole(troj.Pole_bok_wysokosc());
                    break;
                case 4:
                    cout << "Podaj dane:\nWspolrzedne: 1 wierzcholka:\nx:  "; cin >> zmienna_zamienna; troj.ustawAx(zmienna_zamienna);
                    cout << "y: "; cin >> zmienna_zamienna; troj.ustawAy(zmienna_zamienna);
                    cout << "2 wierzcholka:\nx: "; cin >> zmienna_zamienna; troj.ustawBx(zmienna_zamienna);
                    cout << "y: "; cin >> zmienna_zamienna; troj.ustawBy(zmienna_zamienna);
                    cout << "3 wierzcholka:\nx: "; cin >> zmienna_zamienna; troj.ustawCx(zmienna_zamienna);
                    cout << "y: "; cin >> zmienna_zamienna; troj.ustawCy(zmienna_zamienna);
                    troj.ustawPole(troj.Pole_w_układzie_współ());
                    break;
                }
                cout << "Pole trojkata wynosi: " << troj.pobierzPole() << endl;
                break;
            case 2:
                cout << "Podaj dlugosci wszystkich bokow: " << endl;
                cin >> zmienna_zamienna; troj.ustawbok1(zmienna_zamienna);
                cin >> zmienna_zamienna; troj.ustawbok2(zmienna_zamienna);
                cin >> zmienna_zamienna; troj.ustawbok3(zmienna_zamienna);
                troj.ustawObwod(troj.Policz_obwod());
                cout << "Obwod trojkata wynosi: " << troj.pobierzObwod() << endl;
                break;
            }
            break; }
        case 2: {
            Czworokąt czwor(1);
            switch (opcja2) {
            case 1:
                cout << "Jaka metoda (korzystajac z jakich danych):\nDla dowolnego czworoboku:\n1. 1/2*d1*d2*sin(kat pomiedzy d1 i d2, gdzie d1 i d2 to przekatne)\n\nDla rownoleglobokow:\n2. bok1*bok2*sin(kat pomiedzy nimi)" << endl;
                cout << "3. bok*h(bok razy wysokosc padajaca na ten bok)" << endl;
                cin >> opcja3;
                switch (opcja3) {
                case 1:
                    cout << "Podaj dane:\nd1: "; cin >> zmienna_zamienna; czwor.ustawprzek1(zmienna_zamienna);
                    cout << "d2: "; cin >> zmienna_zamienna; czwor.ustawprzek2(zmienna_zamienna);
                    cout << "kat (w stopniach): "; cin >> zmienna_zamienna; czwor.ustawkat(zmienna_zamienna);
                    czwor.ustawPole(czwor.Pole_Dowolny());
                    break;
                case 2:
                    cout << "Podaj dane:\nbok1: "; cin >> zmienna_zamienna; czwor.ustawbok1(zmienna_zamienna);
                    cout << "bok2: "; cin >> zmienna_zamienna; czwor.ustawbok2(zmienna_zamienna);
                    cout << "kat (w stopniach): "; cin >> zmienna_zamienna; czwor.ustawkat(zmienna_zamienna);
                    czwor.ustawPole(czwor.Pole_2boki());
                    break;
                case 3:
                    cout << "Podaj dane:\nbok: "; cin >> zmienna_zamienna; czwor.ustawbok1(zmienna_zamienna);
                    cout << "wysokosc: "; cin >> zmienna_zamienna; czwor.ustawwysokosc(zmienna_zamienna);
                    czwor.ustawPole(czwor.Pole_bok_wys());
                    break;
                }
                cout << "Pole czworokata wynosi: " << czwor.pobierzPole() << endl;
                break;
            case 2:
                cout << "Podaj dlugosci wszystkich bokow: " << endl;
                cin >> zmienna_zamienna; czwor.ustawbok1(zmienna_zamienna);
                cin >> zmienna_zamienna; czwor.ustawbok2(zmienna_zamienna);
                cin >> zmienna_zamienna; czwor.ustawbok3(zmienna_zamienna);
                cin >> zmienna_zamienna; czwor.ustawbok4(zmienna_zamienna);
                czwor.ustawObwod(czwor.Policz_Obwod());
                cout << "Obwod czworokata wynosi: " << czwor.pobierzObwod() << endl;
                break;
            }
            break;}
        }
        cout << "Czy chcesz policzyc cos jeszcze (T/N)? ";
        cin >> warunek;
    } while (warunek == 't' || warunek == 'T');

    return 0;
}

