#include <iostream>
#include<vector>
using namespace std;
pair<int,int> fact(int n){
    int mxcnt=0,cnt=0;
    int num;
    for(int i=2;i*i<=n;i++){
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
   int t,n;
   cin>>t;
   while(t--){
    cin>>n;
    pair<int,int>ans =fact(n);
    int pow=1;
    cout<<ans.first<<endl;
    for(int i=0;i<(ans.first-1);i++){
        cout<<ans.second<<" ";
        pow*=ans.second;
    }
    cout<<(n/pow)*ans.second<<endl;
   }
    return 0;
}
