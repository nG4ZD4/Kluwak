#include <iostream>
using namespace std;

int main ()
{        

    int liczba;
    int d = 0;      //d - dzielnik podanej liczby
    
    cout << "podaj liczbe:  ";
    cin >> liczba;
    cout << "dzielniki tej liczby: \t"; 
    
    while (d < liczba) 
    {
        d++;
        if (liczba % d == 0)
        {
            cout << d << "\t";
        }
    }
    cout << endl;
    return 0;
}