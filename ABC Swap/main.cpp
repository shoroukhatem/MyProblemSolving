#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int temp;
    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    temp = arr[0];
    arr[0]=arr[2];
    arr[2]=temp;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
