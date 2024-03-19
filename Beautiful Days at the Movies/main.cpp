#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    int n =j-i+1;
    int arr[n];
    for(int x=0;x<n;x++){
        arr[x]=i+x;
    }
    int BD=0;
    for(int x=0;x<n;x++){
        string num =to_string(arr[x]);
        reverse(num.begin(),num.end());
        int int_num =stoi(num);
        if(abs(arr[x]-int_num)%k==0){
            BD++;
        }
    }
    cout<<BD;

    return 0;
}
