#include <iostream>

using namespace std;

int main()
{
int b,n,m;
cin>>b>>n>>m;
int key[n],drive[m];
for(int i=0;i<n;i++){
    cin>>key[i];
}
for(int i=0;i<m;i++){
    cin>>drive[i];
}
int Max=-1;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(key[i]+drive[j]>Max&&key[i]+drive[j]<=b){
            Max=key[i]+drive[j];
        }
    }
}
cout<<Max<<endl;
    return 0;
}
