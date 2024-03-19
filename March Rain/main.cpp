#include <iostream>
using namespace std;

bool ok(long long mid,int n,int k,long long h[]){
    int cnt=k;
    int last = h[0];
    for(int i=1;i<n;i++){
        if(h[i]-last+1>mid){
            cnt--;
            last=h[i];
        }
    }
    cnt--;
    if(cnt<0)return false;
    else return true;
}
long long bs(int n,int k,long long h[]){
     long long  start = 0,end=1e9+1;
    long long mid,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(ok(mid,n,k,h)){
            ans = mid;
            end=mid-1;
        }
        else {start=mid+1;}
    }
    return ans;
}
int main()
{
   int t;
   cin>>t;
   while(t-->0){
    int n,k;
    cin>>n>>k;
    long long h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    long long ans =bs(n,k,h);
    cout<<ans<<endl;
   }

    return 0;
}
