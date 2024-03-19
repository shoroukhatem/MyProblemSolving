#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long sumOfDigitsUpToN(int n) {
    // Calculate the number of complete blocks of 10
    int completeBlocks = n / 10;

    // Calculate the sum of digits from 1 to 9
    long long sum = 45;

    // Add the contribution of complete blocks of 10
    sum += 10 * completeBlocks * (completeBlocks + 1) / 2;

    // Calculate the sum of digits for the remaining numbers
    for (int i = 1; i <= n % 10; ++i) {
        sum += i;
    }

    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;


    }
    return 0;
}
