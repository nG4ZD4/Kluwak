#include <iostream>
#include <string>
using namespace std;

void powitanie (string imie)
{
    cout << "\nWitaj " << imie << " milo z toba pracowac :)))" << endl;
}

int main()
{
    string uzytkownik;
    cout << "Jak masz na imie? :\t";
    cin >> uzytkownik;

    powitanie (uzytkownik);

}