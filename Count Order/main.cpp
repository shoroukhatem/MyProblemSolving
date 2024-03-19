#include <iostream>
#include <algorithm>
using namespace std;
int get_prem_index(int arr[],int n){
    int index =0;
    while(prev_permutation(arr,arr+n)){
        index++;
    }
    return index;

}
int main()
{
    int n;
    cin>>n;
    int p[n],q[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
     for(int i=0;i<n;i++){
        cin>>q[i];
    }
int index_p=get_prem_index(p,n);
int index_q=get_prem_index(q,n);
cout<<abs(index_p-index_q)<<endl;
    return 0;
}
