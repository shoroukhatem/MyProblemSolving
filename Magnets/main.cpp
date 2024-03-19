#include <iostream>

using namespace std;

int main()
{
    int n ,g=0;
    cin>>n;
    int m;
    int arr[n];
    m=arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(m!=arr[i]){
            g++;
            m=arr[i];
        }
    }
    cout<<g;
    return 0;
}
