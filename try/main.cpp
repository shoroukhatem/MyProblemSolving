#include <iostream>

using namespace std;

int main()
{
    int i,n,x;
    cin>>n;
for(int m=0;m<n;m++){
     cin>>arr[i];
  }
while(n>0){
for (i=0; i<n; i++)
	if (arr[i] == x)
		break;

if (i < n)
{
	n = n - 1;
	for (int j=i; j<n; j++)
		arr[j] = arr[j+1];
}

    n--;
}
    return 0;
}
