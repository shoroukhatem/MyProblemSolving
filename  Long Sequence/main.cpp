#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int sum=0;
    int k=0;
    int i=0;
    while(sum<x){
            sum+=arr[i];
            k++;
            i=(i+1)%n;
    }

    cout<<k;
    return 0;
}
