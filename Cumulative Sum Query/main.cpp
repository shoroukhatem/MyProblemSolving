#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    long long p[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        p[i]=sum;
    }
    int q;
    cin>>q;
    while(q-->0){
        int i ,j;
        cin>>i>>j;
        if(i==0){
            cout<<p[j]<<endl;
        }
        else{
            cout<<p[j]-p[i-1]<<endl;
        }

    }
    return 0;
}
