#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        if (i % i == 0)
        {
            y += i;
            if (y == x)
            {
                cout << i << end;
            }
        }
    }
    return 0;
}