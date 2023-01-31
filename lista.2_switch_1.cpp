#include <iostream>
using namespace std;

int main()
{
    int ocena;

    cout << "Podaj swoja ocene: " << endl;
    cin >> ocena;

    switch (ocena)
    {
        case 1:
            cout << "Pala jak ta lala" << endl;
            break;
        case 2:
            cout << "Dwoja ale buja" << endl;
            break;
        case 3:
            cout << "Troja zdane byku" << endl;
            break;
        case 4:
            cout << "Cztery mistrzu" << endl;
            break;
        case 5:
            cout << "Piec? chyba sciagales" << endl;
            break;
        case 6:
            cout << "Szesc - wyj3balo poza skale" << endl;
            break;
        default:
            cout << "podales zla ocene - wez nie sciemniaj" << endl;
            break;
    }
    return 0;
}