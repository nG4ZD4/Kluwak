#include <iostream>
using namespace std;

void fibonacci(int numer)
{
    long long a = 0, b = 1;

    for (int i = 0; i < numer; i++)
    {
        cout << b << " ";
        b += a;             // pod zmienna b przypisujemy wyraz nastepny czyli a+b
        a = b - a;          // pod zmienna a przypisujemy wartosc zmiennej b
    }
}

int main()
{
    int n;

    cout << "Podaj ile wyrazow ciagu Fibonacciego wypisac: \t";
    cin >> n;

    fibonacci(n);
}