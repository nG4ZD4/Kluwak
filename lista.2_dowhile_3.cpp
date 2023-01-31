#include <iostream>
using namespace std;

int main ()
{
    int liczby;
    int n_parzyste = 0;

    do 
    {
        cout << "Podaj liczbe:  " << endl;
        cin >> liczby;

        if(liczby >= -5 && liczby <= 5)
        {
            cout << "Liczba jest w zakresie [-5,5]" << endl;
        }
        else
        {
            cout << "Liczba jest poza zakresem [-5,5]" << endl;
        }
        if (liczby % 2 == 1)
        {
            n_parzyste++;
        }
    }while (liczby != 99);

    cout << "Liczba niepatrzystych: \t" << n_parzyste << endl;

    return 0;
}