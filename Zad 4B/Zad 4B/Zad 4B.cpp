#include <iostream>
#include <iomanip>
#include "Trójkąt.h"

using namespace std;

int main()
{
    int liczba_wierszy;
    cout << setw(36) << "Trojkat Pascala" << endl;
    cout << "Podaj liczbe wierszy trokata: ";
    cin >> liczba_wierszy;
    Trójkąt pascal(liczba_wierszy);
    pascal.wypisz();

    return 0;
}