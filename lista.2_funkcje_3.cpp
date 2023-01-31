#include <iostream>
using namespace std;

void kalkulator(double zmienna_1, double zmienna_2, char dzialanie)
{
    double wynik;
    switch (dzialanie)
    {
        case '+':
            wynik = zmienna_1 + zmienna_2;
            cout << "\nWynik dodawania:\t" << wynik << endl;
            break;
        case '-' :
            wynik = zmienna_1 - zmienna_2;
            cout << "\nWynik odejmowania:\t" << wynik << endl;
            break;
        case '*':
            wynik = zmienna_1 * zmienna_2;
            cout << "\nWynik mnozenia:\t" << wynik << endl;
            break;
        case '/':
            wynik = zmienna_1 / zmienna_2;
            cout << "\nWynik dzielenia:\t" << wynik << endl;
            break;
        default :
            cout << "\nPodano zly operator matematyczny" << endl;
    }
}

int main ()
{
    double x,y;
    char znak;

    cout << "Podaj pierwsza zmienna:\t";
    cin >> x;

    cout << "\nPodaj druga zmienna:\t";
    cin >> y;

    cout << "\nOperatory matematyczne do wyboru:" << endl
         << "+ \t DODAWANIE" << endl
         << "- \t ODEJMOWANIE" << endl
         << "* \t MNOZENIE" << endl
         << "/ \t DZIELENIE" << endl;
    cout << "Podaj operator : \t";
    cin >> znak;

    kalkulator(x,y,znak);
}