#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n ;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int leftToRight=0;
    for(int i=0,j=0;i<n,j<n;i++,j++){
    leftToRight+=arr[i][j];
    }
     int RightToLeft=0;
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
    RightToLeft+=arr[i][j];
    }
int result = abs(leftToRight-RightToLeft);
cout<<result<<endl;
    return 0;
}
