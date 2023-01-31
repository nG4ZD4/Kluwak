#include <iostream>
using namespace std;

int main () 
{   
  
    for (int x = 0; x <= 100; x++)
    {
        for (int y = 0; y <= 100; y++)
        {
            if ((x*x + y*y) < 1000)
            {
                cout << x << "\t" << y << endl;
            }
        }
    }
    return 0;
}