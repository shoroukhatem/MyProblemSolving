#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=1e6+10;
     vector<bool>isPrime(n+1,true);
        isPrime[0]= isPrime[1]=false;
        for(long long i=2;(i*i)<=n;i++){
            if(isPrime[i]){
                for(long long j=i*i;j<=n;j+=i){
                    if(isPrime[j]){
                    isPrime[j]=false;
                    }
                }
            }
        }
    cin>>n;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        long long r = sqrt(x);
        if(isPrime[r]&&r*r==x&&r!=1){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
    }

    return 0;
}
