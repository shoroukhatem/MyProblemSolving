#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<long long>st;
    int t;
    cin>>t;
    while(t-->0){
       long long n;
       cin>>n;
       long long arr[n];
       bool flag=true;
       for(int i=0;i<n;i++){
        cin>>arr[i];
        if(st.count(arr[i])==1){
            flag =false;
        }
        else{st.insert(arr[i]);}
       }
       if(flag == true){
        cout<<"prekrasnyy"<<endl;
       }
       else{
        cout<<"ne krasivo"<<endl;
       }
    }

    return 0;
}
