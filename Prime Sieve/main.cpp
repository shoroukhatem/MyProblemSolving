#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
        vector<bool>primes(n+1,true);
        int notprime=1;
        primes[0]= primes[1]=false;
        for(int i=2;(i*i)<=n;i++){
            if(primes[i]){
                for(int j=i*i;j<=n;j+=i){
                    if(primes[j]){
                    notprime++;
                    primes[j]=false;
                    }
                }
            }
        }
        cout<< n-notprime<<endl;
        int x;
        while(q--){
            cin>>x;
            if(primes[x]){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    return 0;
}
