#include <iostream>

using namespace std;

int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,c=0;
    for(int i=0;i<n;i++){
    if(sum>d){
            sum=0;
            c++;
        }
        if(arr[i]<=b){
            sum+=arr[i];
        }

    }
    if(sum>d){
            sum=0;
            c++;
        }
    cout<<c<<endl;
    return 0;
}
