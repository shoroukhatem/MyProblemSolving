#include <iostream>

using namespace std;

bool ok(long long mid,long long needed[],long long has[],long long n,long long k){
    for(long long i=0;i<n;i++){
       long long need=mid*needed[i];
        if(has[i]<need){
           if(need-has[i]<=k){
            k-=(need-has[i]);
           }
           else{
            return false;
           }
        }
    }
    return true;
}
long long bs(long long needed[],long long has[],long long n,long long k){
    long start = 0,end=2e9+1;
    long long index;
    long long mid,ans=0;
    while(start<=end){
        mid=((long long)start+end)/2;
        if(ok(mid,needed,has,n,k)){
            ans = mid;
            start=mid+1;
        }
        else {end=mid-1;}
    }
    return ans;
}
int main()
{
    long long n,k;
    cin>>n>>k;
    long long needed[n];
    long long has[n];
    for(long long i=0;i<n;i++){
        cin>>needed[i];
    }
    for(long long i=0;i<n;i++){
        cin>>has[i];
    }

    long long ans = bs(needed,has,n,k);
    cout<<ans<<endl;
    return 0;
}
