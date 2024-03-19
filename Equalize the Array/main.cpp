#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int freq[101]={0};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
        freq[x]++;
    }
    int Max =*max_element(freq, freq + 101);
    cout<<n-Max<<endl;
    return 0;
}
