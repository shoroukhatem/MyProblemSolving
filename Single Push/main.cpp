#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int diff =0 ;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]&& diff ==0){
            diff = abs(arr1[i]-arr2[i]);
        }
        else if(arr1[i]!=arr2[i]&& diff != abs(arr1[i]-arr2[i])){
            flag = false;
        }
        if(arr1[i]>arr2[i]){
            flag =false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

        t--;
    }
    return 0;
}
