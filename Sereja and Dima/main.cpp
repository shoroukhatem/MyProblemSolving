#include <iostream>

using namespace std;
int main()
{
  int n,s,d,arr[1000];
  cin>>n;
  if(n==0||n>1000){return 0;}
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  // to make the elements distinct
  for(int i=0;i<n;i++){
    for(int j=i+1;j<=n;j++){
        if(arr[i]==arr[j]){
            cout<<"ERROR!";
                return 0;
                }
        else{continue;}
    }
  }


    return 0;
}
