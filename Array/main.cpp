#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            v1.push_back(arr[i]);
        }
        if(arr[i]>0){
            v2.push_back(arr[i]);
        }

        if(arr[i]==0){
            v3.push_back(arr[i]);
        }
    }

    if (v2.size() == 0) {
        for (int i = 0; i < 2; i++)
        {
            v2.push_back(v1.back());
            v1.pop_back();
        }
    }

    if (v1.size() % 2 == 0) {
        v3.push_back(v1.back());
        v1.pop_back();
    }


    cout<<v1.size()<<" ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
     cout<<endl;
    cout<<v2.size()<<" ";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i] <<" ";
    }
    cout<<endl;
    cout<<v3.size()<<" ";
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    return 0;
}
