#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n],arr2[n];
     for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int j = i-d;
     if(j<0){
        j=j+n;
     }
      arr2[j]= arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
