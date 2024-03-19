#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long m;
void game(long long n,int Moves,vector<int>&ans){
    if(n==m){
        ans.push_back(Moves);
        return;
    }
    if((n*3)>m &&(n*2)>m && n!=m){
        return;
    }
    game((n*2),Moves+1,ans);
    game((n*3),Moves+1,ans);

}
int main()
{
    long long n;
    cin>>n>>m;
    vector<int>ans;
    game(n,0,ans);
    if(ans.empty()){
        cout<<-1<<endl;
    }
    else{
        cout<<*min_element(ans.begin(),ans.end())<<endl;
    }
    return 0;
}
