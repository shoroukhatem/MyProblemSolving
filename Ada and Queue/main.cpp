#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin>>q;
    deque <int> deq;
    while(q>0){
        string str;
        cin>>str;
        if(str=="back"){
            if(deq.empty()){
                cout<<"No job for Ada?"<<endl;
            }
            else{
                cout<<deq.back()<<endl;
                deq.pop_back();
            }
        }
        else if(str=="front"){
         if(deq.empty()){
                cout<<"No job for Ada?"<<endl;
            }
            else{
                cout<<deq.front()<<endl;
                deq.pop_front();
            }
        }
        else if(str=="reverse"){
            reverse(deq.begin(),deq.end());
        }
        else if(str=="push_back"){
                int n;
                cin>>n;
                deq.push_back(n);
        }
        else if(str=="toFront"){
            int n;
                cin>>n;
                deq.push_front(n);
        }
        q--;
    }
    return 0;
}
