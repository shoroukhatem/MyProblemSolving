#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n = str.length()+1;
    int pref[n];
    pref[0]=0;
    for(int i=1;i<str.length();i++){
            if(str[i]==str[i-1]){
               pref[i]=pref[i-1]+1;
            }
            else{
                pref[i]=pref[i-1];
            }
        }
    int m;
    cin>>m;
    while(m-->0){
        int l,r;
        cin>>l>>r;
        l--; r--;
        int c= pref[r]-pref[l];
        cout<<c<<endl;
    }
    return 0;
}
