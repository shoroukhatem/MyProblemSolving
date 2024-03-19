#include <iostream>

using namespace std;

int superDigit(string n, int k) {
string value = n;
if(n.length()==1 && k==1){
    return stoull(n);
}
else{
    long sum=0;
    for(int i=0;i<n.length();i++){
        sum+=n[i]-'0';
    }
    sum*=k;
    return superDigit(to_string(sum),1);
}
}
int main()
{
    string num;
    int k;
    cin>>num>>k;
    cout<<superDigit(num,k)<<endl;
    return 0;
}
