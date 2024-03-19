#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<long long> Luckey;
void GenerateLukeyNumbers(long long x){
    if(x>1e10){
        return;
    }
    Luckey.push_back(x);
    GenerateLukeyNumbers(x*10+4);
    GenerateLukeyNumbers(x*10+7);

}
int main()
{
    long long l,r;
    cin>>l>>r;
    GenerateLukeyNumbers(0);
    long long sum=0;
    sort(Luckey.begin(),Luckey.end());
    for(int i=0;i<Luckey.size();i++){
        if(Luckey[i]>=r && r>=1){
            sum+=Luckey[i]*(r-l+1);
            break;
        }
       if(Luckey[i]>=l){
        sum+=(Luckey[i]*((Luckey[i]-l)+1));
        l=Luckey[i]+1;
       }

    }
    cout<<sum;
    return 0;
}
