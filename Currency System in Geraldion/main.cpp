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
    bool flage = false;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
           flage = true;
        }
    }
    if(flage == true){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}
