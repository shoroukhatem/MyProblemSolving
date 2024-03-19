#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>arr(n+1);
    vector<long long>pref1(n+1);
    vector<long long>pref2(n+1);
    priority_queue <long long, vector<long long>, greater<long long>> pq;
    long long sum=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
        pref1[i]=sum;
    }
    for(int i=1;i<=n;i++){
    pq.push(arr[i]);
    }
    long long sum2=0;
    for(int i=0;i<n;i++){
        sum2+=pq.top();
        pq.pop();
        pref2[i+1]=sum2;
    }
    long long m;
    cin>>m;
    while(m-->0){
        long long ch,l,r;
        cin>>ch>>l>>r;
        if(ch==1){
            cout<<pref1[r]-pref1[l-1]<<endl;
        }
        else if(ch==2){
            cout<<pref2[r]-pref2[l-1]<<endl;
        }
    }
    return 0;
}
