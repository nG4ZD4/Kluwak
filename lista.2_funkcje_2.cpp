#include <iostream>
using namespace std;

double potegowanie (double liczba, int potega)
{
    double wynik = liczba;
    for (int i = 1; i < potega; ++i)
    {
        wynik = wynik * liczba;
    }
    cout << "Wartosc potegowania jest rowna = " << wynik << endl;
    return wynik;
}

int main ()
{
    double x;
    int n;
    cout << "Podaj liczbe:\t";
    cin >> x;
    cout << "Podaj do ktorej potegi podniesc liczbe:\t";
    cin >> n;

    potegowanie (x, n);

}