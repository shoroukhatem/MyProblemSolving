#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];
    for(int i=0;i<t;i++){
        cin>> arr[i];
    }
    for(int i=0;i<t;i++){
            int h=1;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]!=0){
            if(j%2==0){
                h=h+1;
            }
            else{
                h=h+h;
            }
            }
        }
     cout <<h <<endl;
    }


    return 0;
}
