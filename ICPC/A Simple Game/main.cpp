#include <iostream>

using namespace std;

int main()
{
    int x=4358;
    int in=1;
    float y;
    int n=4;
    while(n>0){
   y=x/in%10;
   in=in*10;
    cout<<y;
    n--;
    }

   /* int t,x,i=0,j;
    string arr[100];
    cin>>t;
    j=t;
    while(t>0){
      cin>>x;
      while(x>0){
        if(x%2==0){
            x=x/2;
        }
        else {x=x-1;}
        i++;
      }
        if(i%2==0){
           arr[t]="Akash";
        }
        else{arr[t]="Aayush";}

        t--;
        i=0;
    }
 for(int k=j;k>0;k--){
    cout<<arr[k]<<endl;

}
*/
    return 0;
}
