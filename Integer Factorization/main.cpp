#include <iostream>
#include<map>
using namespace std;

int main()
{
    long long n;
    while(cin>>n&&n!=0){
            map<long long,long long>freq;
           while(n%2==0){
            n/=2;
            freq[2]++;
           }
        for(long long i=3;i*i<=n;i+=2){
            while(n%i==0){
            n/=i;
            freq[i]++;
           }
        }
        if(n>1){
            freq[n]++;
        }
        for(auto val:freq){
            cout<<val.first<<"^"<<val.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
