#include <iostream>
#include <string>
using namespace std;

int main()
{
    string imie;
    int wiek; 
    float wzrost;

    cout << "Podaj swoje imie: \t";
    cin >> imie;

    cout << "\nIle masz lat: \t";
    cin >> wiek;

    cout << "\nIle masz wzrostu (w metrach): \t";
    cin >> wzrost;

    if (wzrost >= 2.5)
    {
        cout << "\nE\nR\nR\nO\nR\n";
    }
    else
    {
        cout << "Witaj " << imie << "!" << endl
            << "Lat: " << wiek << endl
            << "Wzrost: " << wzrost << " m" << endl
            << "Milego dnia :)" << endl;
    }

    return 0;
}