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
    int amazing=0;
    int MIN=arr[0],MAX=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>MAX){
            amazing++;
            MAX=arr[i];
        }
        else if(arr[i]<MIN){
            amazing++;
            MIN=arr[i];
        }
    }
    cout<<amazing;
    return 0;
}
