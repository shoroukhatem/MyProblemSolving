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
    int b=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            b+=arr[i];
        }
        else{
            c+=arr[i];
        }
    }
    cout<<b-c<<endl;
    return 0;
}
