#include <iostream>
using namespace std;

// Kalkulator (2 liczby), ktory po podaniu odpowiedniego operatora (+,-,*,/) wykona dzialanie i pokaze wynik 

int main ()
{
    int x, y;
    char dzialanie;
    cout << "podaj pierwsza liczbe: \t" ;
    cin >> x;

    cout << "podaj druga liczbe: \t" ;
    cin >> y;

    cout << endl << "jakie dzialanie wykonac?" << endl
        << "mnozenie -> \t *" << endl 
        << "dzielenie -> \t /" << endl
        << "dodawanie -> \t +" << endl
        << "odejmowanie -> \t -" << endl
        << "\npodaj operator matematyczny: \t";
    cin >> dzialanie;
    
    switch (dzialanie)
    {
        case '*':
            cout << "\nwynik mnozenia:  " << (x * y) << endl;
            break;
        case '/':
            cout << "\nwynik dzielenia:  " << (x / y) << endl;
            break;
        case '+':
            cout << "\nwynik dodawania:  " << (x + y) << endl;
            break;
        case '-':
            cout << "\nwynik odejmowania:  " << (x - y) << endl;
            break;
        default:
            cout << "\nERROR \t podales zly operator matematyczny" << endl;
            break; 
    }
    return 0;
}
