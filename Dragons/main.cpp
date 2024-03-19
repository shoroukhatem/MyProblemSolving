#include <iostream>
#include <map>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    multimap<int,int> mp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp.insert(pair<int,int>(x,y));
    }
    bool flag = true;
    for(auto it =mp.begin();it!=mp.end();it++){
            pair<int,int> p =*it;
        if(p.first<s){
            s+=p.second;
        }
        else{
                flag =false;
        break;

        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
    return 0;
}
