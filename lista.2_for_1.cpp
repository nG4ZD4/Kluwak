#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "podaj liczbe: " << endl;
    cin >> liczba;
    
    for (int i = 1; i <= liczba; i++){
        if (liczba % i == 0 )
        {
            if (i == liczba ) {
                cout << "Tak - liczba pierwsza" << endl;
            }
            else {
                cout << "Nie - liczba pierwsza" << endl;
            }
        }
    }   
    return 0;
}