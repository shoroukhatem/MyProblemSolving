#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
        string s1,s2;
        set <char> st1,st2;
         int n;
        cin>>s1;
        cin>>s2;
        bool flage = false;
        for(int i=0;i<s1.length();i++){
            st1.insert(s1[i]);
        }
        for(int i=0;i<s2.length();i++){
            st2.insert(s2[i]);
        }
        if(st1.size()<st2.size()){
            for(int value : st1){
                if(st2.count(value)){
                    flage = true;
                    break;
                }
            }
        }
        else{
            for(int value : st2){
                if(st1.count(value)){
                    flage = true;
                    break;
                }
            }
        }

        if(flage == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        t--;
    }
    return 0;
}

//  if(s1.length()<s2.length()){
//            n =s1.length();
//             for(int i=0;i<n;i++){
//                    for(int j=0;j<s2.length();j++){
//                         if(s1[i]==s2[j]){
//                            flage =true;
//                         }
//                    }
//
//            }
//        }
//        else{
//            n=s2.length();
//            for(int i=0;i<n;i++){
//                    for(int j=0;j<s1.length();j++){
//                         if(s1[j]==s2[i]){
//                            flage =true;
//                         }
//                    }
//
//            }
//        }
