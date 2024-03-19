#include <iostream>
#include <vector>
using namespace std;
int sum(int n,vector<int> &arr){
if(n==0){
    return arr[0];
}
int res = arr[n]+sum(n-1,arr);
return res;
}
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res =sum(n-1,arr);
    cout<<"case "<<i<<": "<<res<<endl;
    i++;
    }
    return 0;
}
