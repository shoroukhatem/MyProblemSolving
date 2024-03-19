#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> dq;
    bool sorted =false;
    priority_queue<int, vector<int>, greater<int>> mypq;;
    int n;
    cin>>n;
    while(n>0){
    int ch;
    cin>>ch;
    if(ch==1){
        int val;
        cin>>val;
        dq.push_back(val);
    }
    else if(ch==2){
            if(!sorted){
                if(!dq.empty()){
                cout<< dq.front()<<endl;
                dq.pop_front();
            }
            }
            else{
                cout<<mypq.top()<<endl;
                mypq.pop();

            }
        }
    else if(ch==3){
            sorted =true;
        while (!dq.empty()){
            mypq.push(dq.front());
            dq.pop_front();
        }
    }
        n--;
    }
    return 0;
}
