#include <iostream>
using namespace std;

int tablica[10];
int suma = 0; 
double srednia;
int powtorz = 0;

void suma_srednia (int tab[], int rozmiar);
void malejaca_rosnaca (int tab[], int rozmiar);
void symetryczna (int tab[], int rozmiar);
void powtarzanie(int tab[], int rozmiar);
void przesuwanie (int tab[], int rozmiar);
void odwracanie (int tab[], int rozmiar);
void sortowanie (int tab[], int rozmiar);

//****************************************************************************************************
int main ()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj (" << i+1 << ") element tablicy:\t";
        cin >> tablica[i];
    }
    cout << endl;

    suma_srednia(tablica, 10);
    malejaca_rosnaca(tablica, 10);
    symetryczna(tablica, 10);
    powtarzanie(tablica, 10);
    //przesuwanie(tablica, 10);
    odwracanie(tablica, 10);
    sortowanie(tablica, 10);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void suma_srednia (int tab[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        suma += tab[i]; 
        srednia = suma / rozmiar;
    }

    cout << "Suma podanych elementow:\t" << suma << endl;
    cout << "Srednia podanych elementow:\t" << srednia << endl;
}
//----------------------------------------------------------------------------------------------------------------
void malejaca_rosnaca (int tab[], int rozmiar)
{
    bool rosnaca = true, malejaca = true;

    for (int i = 0; i < rozmiar - 1; i++)
    {
        if (tab[i] < tab[i+1])
        {
            rosnaca = true;
        }
        else { rosnaca = false; break;}
    }
    cout << "czy tablica jest rosnaca: " << rosnaca << endl;

    for (int i = 0; i < rozmiar-1; i++)
    {
        if (tab[i] > tab[i+1])
        {
            malejaca = true;
        }
        else { malejaca = false; break; }
    }
    cout << "czy tablica jest malejaca: " << malejaca << endl;
}
//----------------------------------------------------------------------------------------------------------------
void symetryczna (int tab[], int rozmiar)
{
    bool symetryczna = true;
    if (rozmiar % 2 == 0)
    {
        for (int i = 0; i < rozmiar; i++)
        {
            if (tab[i] != tab[rozmiar - 1])
            {
                symetryczna = false;
                rozmiar--;
                break;
            }
            else { symetryczna = true; break; }
        }
    }
    cout << "czy tablica jest symetryczna: " << symetryczna << endl;
}
//-------------------------------------------------------------------------------------------------------------------
void powtarzanie(int tab[], int rozmiar)
{
    cout << "Powtarzajaca sie wartosc: \t";
    for (int i = 0; i < rozmiar; i++)
    {
        if (tab[i++] = tab[i])
        {
            cout << tab[i] << "\t";
        }
    }
    cout << endl;
}
//----------------------------------------------------------------------------------------------------------------
/*void przesuwanie (int tab[], int rozmiar)
{
    cout << "Elementy przesuniete o 1 pozycje w gore: \t";
    for (int i = 0; i < rozmiar - 1; i++)
    {
        tab[i] = tab[i+1];
        cout << tab[i] << "\t";
    }
    cout << endl;
}*/

//----------------------------------------------------------------------------------------------------------------
void odwracanie (int tab[], int rozmiar)
{
    cout << "Elementy po odwroceniu: \t";
    for (int i = rozmiar-1; i >= 0; i--)
    {
        cout << tab[i] << "\t";
    }
    cout << endl;
}

//----------------------------------------------------------------------------------------------------------------
void sortowanie (int tab[], int rozmiar)
{
    cout << "sortowanie: \t";
    for (int i = 0; i < rozmiar-1; i++)
    {
        for (int j = 1; j < rozmiar-i; j++)
        {
            if (tab[j] > tab[j+1])
            {
                swap(tab[j], tab[j+1]);
            }
        }
    }
    for (int i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}    