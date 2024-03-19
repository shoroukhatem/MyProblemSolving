#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
     for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    double p =0.0 ,neg=0.0,z=0.0;
    for (int i=0;i<n;i++){
        if(arr[i]>0){
            p++;
        }
         else if(arr[i]<0){
            neg++;
        }
        else{
           z++;
        }
    }
double r1 = double(p/n);
double r2 = neg/n;
double r3 = z/n;
    cout << r1 <<endl;
    cout << r2 <<endl;
    cout << r3<<endl;
    return 0;
}
