#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;
pair<long long,long long> fact(long long& n){
    long long mxcnt=0;
    long long num=n;
    for(long long i=2;i*i<=n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>mxcnt){
            mxcnt=cnt;
            num=i;
        }
    }
    return {mxcnt,num};
}
int main()
{
   long long t,n;
   cin>>t;
   while(t--){
    cin>>n;
    long long num = n;
    pair<long long,long long> ans =fact(num);
    if(num==n){
        ans={1,num};
    }
    long long pow=1;
    cout<<ans.first<<endl;
    for(long long i=0;i<ans.first-1;i++){
        cout<<ans.second<<" ";
        pow*=ans.second;
    }
    cout<<(n/pow)<<endl;
   }
    return 0;
}

