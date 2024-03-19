#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int pref[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        pref[i]= sum;
    }
    int Min=INT_MAX;
    int Begin=0;
    for(int i=0,j=i+k-1;i<n,j<n;i++,j++){
        if(i==0){
            if(pref[j]<Min){
                Min=pref[j];
                Begin = i;
            }
        }
        else{
            if(pref[j]-pref[i-1]<Min){
                Min=pref[j]-pref[i-1];
                Begin = i;
            }
        }
    }
    cout<<Begin+1<<endl;
    return 0;
}
