#include <iostream>
#include <vector>
using namespace std;
void removeX(vector<string> &a,string x,int indx){
    if(indx==a.size()){
        return;
    }
    if(a[indx]!=x){
        cout<<a[indx]<<" ";
    }
    return removeX(a,x,indx+1);
}
int main()
{
    int n;
    string x;
    cin>>n>>x;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    removeX(a,x,0);
    return 0;
}
