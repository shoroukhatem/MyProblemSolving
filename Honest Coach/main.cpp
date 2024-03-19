#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n;
        int min_sub=INT_MAX;
        cin>>n;
        int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            for(int i=0;i<n;i++){
              for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])<min_sub){
                    min_sub=abs(arr[i]-arr[j]) ;
                }
              }
            }
            cout<<min_sub<<endl;
        t--;
    }
    return 0;
}
