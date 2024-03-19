#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n=1e7;
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
        vector<int>primes;
        for(int i=2;i<isPrime.size();i++){
            if(isPrime[i]){
                primes.push_back(i);
            }
        }
        int t;
        cin>>t;
        while(t--){
            cin>>n;
            int i=0;
            long sum=0;
            while(primes[i]<=n){
                sum+=primes[i];
                i++;
            }
            cout<<sum<<endl;
        }
    return 0;
}
