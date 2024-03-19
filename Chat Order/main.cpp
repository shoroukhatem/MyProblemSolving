#include <iostream>
#include  <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> st;
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        if(st.count(arr[i])){
            continue;
        }
        else{
            cout<<arr[i]<<endl;
            st.insert(arr[i]);
        }
    }

    return 0;
}
