#include <iostream>
#include <vector>
#include<set>
using namespace std;

int main()
{
    vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
     set<string>st;
        for(int i=0;i<emails.size();i++){
            bool del=false;
            for(int j=0;j<emails[i].length();j++){
                if(emails[i][j]=='@'){
                    break;
                }
                else if(emails[i][j]=='.'){
                   emails[i].erase(j,1);
                   j--;
                }
                else if(emails[i][j]=='+'){
                    del = true;
                    emails[i].erase(j,1);
                    j--;
                }
                else if(del==true){
                    emails[i].erase(j,1);
                    j--;
                }
            }
            st.insert(emails[i]);
            cout<<emails[i]<<endl;
        }

    return 0;
}
