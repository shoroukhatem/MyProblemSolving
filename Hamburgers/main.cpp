#include <iostream>
#include <unordered_map>
using namespace std;
bool ok(long long mid,unordered_map <char,int>needed,char order[3],long long has[3],long long p[3],long long r){
 /* long long cost=0;
   long long b = needed['B']*mid;
    long long costb=max((long long)0,(b-has[0])*p[0]);
    cost+=costb;
    long long s = needed['S']*mid;
    long long costs=max((long long)0,(s-has[1])*p[1]);
    cost+=costs;
    long long c = needed['C']*mid;
    long long costc=max((long long)0,(c-has[2])*p[2]);
    cost+=costc;
    if(cost<=r){
        return true;
    }
    else{
        return false;
    }*/
for(int i=0;i<3;i++){
    long long need =needed[order[i]]*mid;
    if(need>has[i]){
        if(need-has[i]<=(r/p[i])){
            r-=(need-has[i])*p[i];
        }
        else{
            return false;
        }
    }

}
return true;
}
int main()
{
    string str;
    cin>>str;
    unordered_map <char,int>needed;
    needed['C']=0;
    needed['S']=0;
    needed['B']=0;
    for(int i=0;i<str.length();i++){
        needed[str[i]]++;
    }
    char order[3]={'B','S','C'};
    long long has[3];
    long long p[3];
    long long r;
    for(int i=0;i<3;i++){
        cin>>has[i];
    }
    for(int i=0;i<3;i++){
        cin>>p[i];
    }
    cin>>r;
    long long start = 1;
    long long end=2e12+1;
    long long mid,ans=0;
    while(start<=end){
        mid=((long long)start+end)/2;
        if(ok(mid,needed,order,has,p,r)){
            ans = mid;
            start=mid+1;
        }
        else {end=mid-1;}
    }
    cout<<ans<<endl;
    return 0;
}
