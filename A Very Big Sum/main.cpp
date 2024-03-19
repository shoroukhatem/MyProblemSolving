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
     long long result=0;
     for (int i=0;i<n;i++){

        result+=arr[i];
    }
    cout << result;
    return 0;
}
