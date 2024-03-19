#include <iostream>

using namespace std;

int main()
{
    string a ="11";
    string b="1";
    string result="";
    string temp="0";
        for(int i=0;i<min(a.length(),b.length());i++){
            if(a[i]==b[i]&&a[i]==1&& temp == "0"){
                result+="0";
                temp="1";
            }
            else if(a[i]==b[i]&&a[i]==0&& temp == "0"){
                    result+="0";
            }
            else if(a[i]==b[i]&&a[i]==0&& temp == "1"){
                    result+="1";
            }
            else{
                if(temp=="1"){
                    result+="0";
                    temp = "0";
                }
                else{
                     result+="1";
                }
            }
        }
        cout<<result;
    return 0;
}
