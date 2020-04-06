#include <iostream>
#include "RównaniaKwad.h"

using namespace std;

int main()
{
    double a, b, c;
    cout << "Podaj wspolczynniki rownania kwadratowego postaci: a2*x^2 + a1*x + a0 = 0" << endl;
    cout << "a2 = ";
    cin >> a;
    cout << "a1 = ";
    cin >> b;
    cout << "a0 = ";
    cin >> c;
    RównaniaKwad rownanie(c, b, a);
    rownanie.policz();
    rownanie.wypisz();

    return 0;
}
