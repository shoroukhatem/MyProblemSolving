#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int x,y;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>x;
        if(x==1){
         y=abs(i-3)+abs(j-3);
        }
    }
   }
   cout<<y;
    return 0;
}
