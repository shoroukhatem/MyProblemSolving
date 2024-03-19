#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int numTrucks(int numCrates, int loadSize){
		if(numCrates <= loadSize)
			return 1;
		if(numCrates % 2)
			return numTrucks(numCrates/2 + 1, loadSize) + numTrucks(numCrates/2, loadSize);
		return 2 * numTrucks(numCrates/2, loadSize);
	}
int main()
{
    string cr,n;
    stringstream ss(cr);
    stringstream ss1(n);
    while(ss.eof()&&ss1.eof()){
      cin>>cr>>n;
      int piles = stoi(cr);
      int t = stoi(n);
      cout<<numTrucks(piles,t)<<endl;
    }

    return 0;
}
