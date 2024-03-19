#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string, int> database;
    while(n>0){
    string name;
    cin>>name;
    if(database.count(name)==0){
        cout<<"OK"<<endl;
        database[name]=1;
    }
    else{
        cout<<name<<database[name]<<endl;
        database[name]+=1;
    }
    n--;
    }

    return 0;
}
