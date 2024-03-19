#include <iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n=3000;
     vector<bool>isPrime(n+1,true);
        isPrime[0]= isPrime[1]=false;
        for(int i=2;(i*i)<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    if(isPrime[j]){
                    isPrime[j]=false;
                    }
                }
            }
        }

        cin>>n;
        int c=0;
        for(int i=1;i<=n;i++){
            int cnt=0;
            set<int>st;
            for(int j=1;j*j<=i;j++){
                if(i%j==0){
                    if(isPrime[j]&&st.count(j)==0){
                            st.insert(j);
                        cnt++;
                    }
                    if(isPrime[(i/j)]&&st.count((i/j))==0){
                         st.insert((i/j));
                        cnt++;
                    }
                }
            }
        if(cnt==2){
            c++;
        }
        st.clear();
        }
        cout<<c<<endl;
    return 0;
}
