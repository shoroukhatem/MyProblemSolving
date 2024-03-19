#include <iostream>

using namespace std;
bool IsHard(string str,int indx){
if(indx==str.length()){
    return true;
}
if((indx+1)%2==0&&isupper(str[indx])){
   return IsHard(str,indx+1);
}
else if((indx+1)%2==1&&islower(str[indx])){
   return IsHard(str,indx+1);
}
else{
    return false;
}
}
int main()
{
    string str;
    cin>>str;
    bool flage =IsHard(str,0);
    if(flage){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
