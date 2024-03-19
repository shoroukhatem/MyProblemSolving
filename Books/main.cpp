#include <iostream>

using namespace std;

int main()
{
    long long n,t;
    cin>>n>>t;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    int l=0,r=0,sum=0;
    while(r<n){
        sum+=arr[r];
        if(sum<=t){
        ans=max(ans,(r-l+1));

        }
        else{
        sum-=arr[l];

           l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
