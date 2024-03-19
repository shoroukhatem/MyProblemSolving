#include <iostream>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
   for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int Max = arr[0];
     for(int i=0;i<n;i++){
            if(arr[i]>Max){
                Max = arr[i];
            }

    }

    int result = Max-k;
    if(result<0){
        result = 0;
    }
    cout<<result;
    return 0;
}
