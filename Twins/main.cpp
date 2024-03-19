#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int pref[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        pref[i]=sum;
    }
    int sumU=0,sumT=0,c=0;
    for(int i=n-1;i>=0;i--){
        if(sumU<=sumT){
            sumU += arr[i];
            sumT=pref[i-1];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
