
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
     vector<bool>isPrime(n+1,true);
     vector<int>prime;
        isPrime[0]= isPrime[1]=false;
        for(int i=2;(i*i)<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    if(isPrime[j]){
                    isPrime[j]=false;
                    }
                }
            }
        }
        for(int i=0;i<isPrime.size();i++){
            if(isPrime[i]){
                prime.push_back(i);
            }
        }
        int c=0;
    for(int i=1;i<prime.size();i++){
        if((prime[i]+prime[i-1]+1)<=n&&isPrime[(prime[i]+prime[i-1]+1)]){
            c++;
        }
    }
    if(c>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
