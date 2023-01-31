#include <iostream>
using namespace std;

int fibo (int numer)
{
    if (numer < 3)
    {
        return 1;
    }
    else 
    {
       return fibo(numer - 2) + fibo(numer - 1);
    }
}

int main ()
{
    int n;
    cout << "Podaj ktory element ciagu Fibonacciego wyswietlic:\t";
    cin >> n;
    cout << " (" << n << ")" << " element ciagu ma wartosc: " << fibo(n) << endl;
}