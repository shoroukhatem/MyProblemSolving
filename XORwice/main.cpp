#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        int a,b;
        cin>>a>>b;
        int ans = a^b;
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
