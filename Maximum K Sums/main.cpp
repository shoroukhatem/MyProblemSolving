#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1,0);
    priority_queue<int> L;
    vector<int>p(n+1,0);

    for(int i=1;i<=n;i++){
       cin>>a[i];
    }
     int sum=0;
     for(int i=1;i<=n;i++){
        sum+=a[i];
        p[i]=sum;
     }
     int w=n;
     while(w>0){
        for(int l=1,r=w;r<=n;l++,r++){
             L.push((p[r]-p[l-1]));
        }

        w--;
     }

     int i=0;
    while (i<k) {
        cout << L.top()<< " ";
        L.pop();
        i++;
    }
    cout << endl;
    return 0;
}
