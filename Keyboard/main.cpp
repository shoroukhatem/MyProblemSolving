#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <char>vec(30);
    vector<char>::iterator it;
    vec[0]='q';
    vec[1]='w';
    vec[2]='e';
    vec[3]='r';
    vec[4]='t';
    vec[5]='y';
    vec[6]='u';
    vec[7]='i';
    vec[8]='o';
    vec[9]='p';
    vec[10]='a';
    vec[11]='s';
    vec[12]='d';
    vec[13]='f';
    vec[14]='g';
    vec[15]='h';
    vec[16]='j';
    vec[17]='k';
    vec[18]='l';
    vec[19]=';';
    vec[20]='z';
    vec[21]='x';
    vec[22]='c';
    vec[23]='v';
    vec[24]='b';
    vec[25]='n';
    vec[26]='m';
    vec[27]=',';
    vec[28]='.';
    vec[29]='/';
    char shift;
    cin>>shift;
    string input;
    cin>>input;
    string output="";
    if(shift=='R'){
       for(int i=0;i<input.length();i++){
            char in =input[i];
            it= find(vec.begin(),vec.end(),in);
            int indx = it- vec.begin();
            indx=indx-1;
            output +=vec[indx];
       }
    }
    else if(shift=='L'){
    for(int i=0;i<input.length();i++){
            char in =input[i];
            it= find(vec.begin(),vec.end(),in);
            int indx = it- vec.begin();
            indx=indx+1;
            output +=vec[indx];
       }
    }
    cout<<output<<endl;

    return 0;
}
