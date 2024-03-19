#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>st;
        map<int, int>freq;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(freq[arr[i]]==0){
                st.push_back(arr[i]);
            }
            freq[arr[i]]++;

        }

        int sets=0;
        sort(st.begin(),st.end());
        for(int i=0;i<st.size();i++){
            while(freq[st[i]]>0){
                sets++;
                freq[st[i]]--;
                int x =st[i];
                while(freq[++x]>0){
                    freq[x]--;
                }
            }
        }

        cout<<sets<<endl;

    }

    return 0;
}
