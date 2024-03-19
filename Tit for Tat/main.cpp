
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        for (int i = 0;i < n-1 && k;i++){
            int c = min(arr[i],k);
            arr[i]-=c;
            arr[n-1]+=c;
            k-=c;
        }
         for (int i = 0;i < n;i++) {
            cout<< arr[i]<<" ";
        }
        cout<<endl;
        t--;
    }
    return 0;
}


