#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    deque <int> childern;
    deque <int> index;
    for(int i=1;i<=n;i++){
        int x ;
        cin>>x;
        childern.push_back(x);
        index.push_back(i);
    }
    while(childern.size()>1){
            if(childern.front()<=m){

                    childern.pop_front();
                    index.pop_front();

            }
            else{
                childern.push_back(childern.front()-m);
                index.push_back(index.front());
                childern.pop_front();
                index.pop_front();


            }
    }

        cout<<index.back()<<endl;


    return 0;
}



//    int index=0;
//    int i=1;
//    int j=1;
//    bool flage = false;
//    while(!line.empty()){
//        if(line.front()>m){
//            int x=line.front()-m;
//            line.push(x);
//            line.pop();
//            if(j<=n){
//                index=i;
//            }
//            flage =true;
//        }
//        else if(line.front()<=m){
//            line.pop();
//        }
//        if(i<n){
//            i++;
//        }
//        else if(i>n){
//           i=1;
//        }
//        j++;
//    }
//    if(flage==true){
//         cout<<index<<endl;
//    }
//    else{
//        cout<<i<<endl;
//    }

