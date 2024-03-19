#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=1e5+10;
     vector<bool>isPrime(n+1,true);
     vector<int>primes;
        isPrime[0]= isPrime[1]=false;
        for(long long i=2;i<=n;i++){
            if(isPrime[i]){
                    primes.push_back(i);
                for(long long j=i*i;j<=n;j+=i){
                    if(isPrime[j]){
                    isPrime[j]=false;
                    }
                }
            }
        }
    int m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    //NEW Solution
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        int sumR=0;
        for(int j=0;j<m;j++){
            if(!isPrime[mat[i][j]]){
               int indx= lower_bound(primes.begin(),primes.end(),mat[i][j])-primes.begin();
                sumR+=primes[indx]-mat[i][j];
            }
        }
        mn=min(mn,sumR);
        }
         for(int i=0;i<m;i++){
        int sumC=0;
        for(int j=0;j<n;j++){
             if(!isPrime[mat[j][i]]){
               int indx= lower_bound(primes.begin(),primes.end(),mat[j][i])-primes.begin();
                sumC+=primes[indx]-mat[j][i];
            }
        }
         mn=min(mn,sumC);
        }
         cout<<mn<<endl;
    //OLD SOLUTION
   /* int mn=INT_MAX;
    for(int i=0;i<n;i++){
        int c=0,inc=0;
        for(int j=0;j<m;j++){
            while(!isPrime[mat[i][j]+inc]){
                inc++;
                c++;
            }
            inc=0;
        }
        mn=min(c,mn);
    }
    for(int i=0;i<m;i++){
        int c=0,inc=0;
        for(int j=0;j<n;j++){
            while(!isPrime[mat[j][i]+inc]){
                c++;
                inc++;
            }
            inc=0;
        }
        mn=min(c,mn);
    }
    cout<<mn<<endl;
*/
    return 0;
}
