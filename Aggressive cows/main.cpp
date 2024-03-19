#include <iostream>
#include <algorithm>
using namespace std;
bool ok(int mid,int n,int c,int arr[]){
int last =arr[0];
int counter=0;
for(int i=1;i<n;i++){
    if(arr[i]-last>=mid){
        counter++;
        last=arr[i];
        if(counter==c-1){return true;}
    }
}
return false;
}
int bs(int n,int c,int arr[]){
     int start = 0,end=1e9+1;
    int mid,ans=0;
    while(start<=end){
        mid=(start+end)/2;
        if(ok(mid,n,c,arr)){
            ans = mid;
            start=mid+1;
        }
        else {end=mid-1;}
    }
    return ans;
}
int main()
{

    int t;
    cin>>t;
    while(t-->0){
        int n,c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        int ans=bs(n,c,arr);
        cout<<ans<<endl;
    }

    return 0;
}
