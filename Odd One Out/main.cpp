#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>freq(10,0);
    freq[a]++;
    freq[b]++;
    freq[c]++;
    auto ptr = find(freq.begin(), freq.end(), 1);
    if(ptr!=freq.end()){
        int index = ptr-freq.begin();
        cout<<index<<endl;
    }
   }
    return 0;
}
