#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int> pq;
    int n;
    cin>>n;
    int x;
    for (int i=0;i<n;i++){
        cin>>x;
        pq.push(x);
    }
    int h=0;
    int p=0;
    while (!pq.empty()&& h>=0) {
       h+= pq.top();
        pq.pop();
        if(h>=0){
           p++;
        }
    }
    cout<<p<<endl;
    return 0;
}
