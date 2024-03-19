#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int Minimum = arr[0] , Maximum= arr[0];
    int Min=0,Max=0;
    for(int i =1;i<n;i++){
        if(arr[i]>Maximum){
            Maximum = arr[i];
            Max++;
        }
        else if(arr[i]<Minimum){
            Minimum = arr[i];
            Min++;
        }
    }
    cout << Max <<" " << Min;
    return 0;
}
