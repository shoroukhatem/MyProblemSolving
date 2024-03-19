// Maximizing XOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int l, r;
    cin >> l;
    cin>> r;

    int ans= 0;
   for (int i = l;i < r + 1;i++) {
       for (int j = i + 1;j < r + 1;j++) {
           int x = i ^ j;
           ans = max(ans, x);
       }
   }
    cout << ans << endl;
}

