#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int k[n];
    for(long long i=0;i<n;i++){
        scanf("%d", &k[i]);
    }
    sort(k,k+n);
    long long s=0,e=(n+1)/2,ans=n;
    while(s<n,e<n){
        if(k[s]*2<=k[e]){
            s++;
            ans--;
        }
        e++;
    }
    cout<<ans<<endl;
    return 0;
}

