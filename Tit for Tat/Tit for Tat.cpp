// Tit for Tat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        while (k > 0) {
            if (arr[0] > 0) {
                arr[0]--;
            }
            arr[n - 1]++;
            k--;
        }
        t--;
    }
    return 0;
}

