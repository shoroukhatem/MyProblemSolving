#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n,d;
        cin>>n>>d;
        bool flage1 =true;
         bool flage2 =false;
        int counter=1;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

         for(int i=0;i<n;i++){
            if(arr[i]>d){
               flage1=false;
               break;
            }
        }
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]+arr[j]<=d){
                    flage2 =true;
                    break;

                }
                }

        }

        if(flage1==true || flage2==true){
            cout<<"yes"<<endl;
                    }
        else{cout<<"No"<<endl;}

        t--;
    }
    return 0;
}
