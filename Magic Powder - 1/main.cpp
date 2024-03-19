#include <iostream>

using namespace std;

bool ok(int mid,int needed[],int has[],int n,int k){
    for(int i=0;i<n;i++){
       int need=mid*needed[i];
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
int bs(int needed[],int has[],int n,int k){
    int start = 0,end=2000;
    int index;
    int mid,ans=0;
    while(start<=end){
        mid=(start+end)/2;
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
    int n,k;
    cin>>n>>k;
    int needed[n];
    int has[n];
    for(int i=0;i<n;i++){
        cin>>needed[i];
    }
    for(int i=0;i<n;i++){
        cin>>has[i];
    }

    int ans = bs(needed,has,n,k);
    cout<<ans<<endl;
    return 0;
}
