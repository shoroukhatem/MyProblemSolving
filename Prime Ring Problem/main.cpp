#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>primes={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
int n;
 vector<vector<int>>ans;
    vector<int>arr(n);
    set<int>used;
bool isPrime(int p){
    for(int i=0;i<primes.size();i++){
        if(p==primes[i]){
            return true;
        }
    }
    return false;
}
void solve(int l){
    if(l==n){
        if(isPrime(arr[n-1]+1)){
            ans.push_back(arr);
        return;
        }
    }
      for(int i=2;i<=n;i++){
            if(isPrime(arr[l-1]+i)&&used.count(i)==0){
                arr.push_back(i);
                used.insert(i);
                solve(l+1);
                arr.pop_back();
                used.erase(i);
            }
        }
}

int main()
{

    int c=0;
    while (scanf("%d", &n) != EOF) {
    arr.push_back(1);
    used.insert(1);
    solve(1);
    if(c++){
        cout<<endl;
    }
    cout<<"Case "<<c<<":"<<endl;
    for(int i=0;i<ans.size();i++){

         for(int j=0;j<ans[i].size()-1;j++){
            cout<<ans[i][j]<<" ";
         }
         cout<<ans[i][ans[i].size()-1]<<endl;
         }
         ans.clear();
         used.clear();
         arr.clear();
    }

    return 0;
}
