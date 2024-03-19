#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int j=0,k=1;j<n-1,k<n;j++,k++){
          if(s[j]==s[k]){
            c++;
          }
    }

   cout<<c<<endl;
    return 0;
}
