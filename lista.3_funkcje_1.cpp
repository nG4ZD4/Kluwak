#include <iostream>
using namespace std;

void obliczenia (int liczba_1, int liczba_2)
{
    cout << "\nWspolne dzielniki podanych liczb:" << endl;
    for (int i = 1; i <= liczba_1 && liczba_2; ++i)
    {
        if (liczba_1 % i == 0 && liczba_2 % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main ()
{
    int x,y;

    cout << "Podaj pierwsza liczbe: \t";
    cin >> x;
    cout << "Podaj druga liczbe: \t";
    cin >> y;

    obliczenia (x, y);
}
