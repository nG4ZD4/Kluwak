#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int liczby;
    int suma = 0;
    int iloczyn = 1;

    do
    {
        cout << i+1 <<". Podaj liczby:  " << endl;
        cin >> liczby;
        
        i++;
        if (liczby > 0)
        {
            suma = suma + liczby;
        }
        if (liczby % 2 != 0)
        {
            iloczyn = iloczyn * liczby;
        }
        
    }while (i < 10);

    cout << "suma:\t" << suma << endl << "iloczyn nieparzystych:\t" << iloczyn << endl;

    return 0;
}