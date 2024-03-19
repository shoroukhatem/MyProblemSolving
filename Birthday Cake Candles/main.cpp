#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Max=0;
    int M=0;
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==Max){
            M++;
        }
    }
    cout<<M;
    return 0;
}
