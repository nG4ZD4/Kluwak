#include <iostream>
using namespace std;

int main()
{
    for (int x = 0; x <= 1000; x++)
    {
        if (x % 13 == 0)
        {
            cout << x << " " ;
        }
    }
    cout <<  endl;
    return 0;
}