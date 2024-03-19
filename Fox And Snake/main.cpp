#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    bool flage  = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                arr[i][j]='#';
            }
            else{
                if(j==m-1 && flage == true){
                    arr[i][j]='#';
                    flage  = false;
                }
                else if(j==0&&flage==false){
                    arr[i][j]='#';
                }
                else if(j==m-1&&flage==false){
                    arr[i][j]='.';
                    flage = true;
                }
                else{
                    arr[i][j]='.';
                }
            }

        }


    }
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
    }

    return 0;
}
