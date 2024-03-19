#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n,m,s,c=1;
   string l;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>m;
    cin>>l;
    s=l.size();
    if(s>81){break;}
    if(m<=s){
      l.erase(m-1,1);
    }
    else{break;}
     cout<<c<<" "<<l<<endl;
     c++;
   }

    return 0;
}
