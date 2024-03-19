#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       // int grid[n][n];
       vector<vector<char>> grid(n, vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
            }
        }
        int row = 0, col = 0;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    row = i;
                    col = j;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        int numberOfOnes1 = 0;
        int numberOfOnes2 = 0;
            for (int j = col; j < n; ++j){
                     if(grid[row][j]=='1'){
                        numberOfOnes1++;
                     }
                      if(grid[row+1][j]=='1'){
                        numberOfOnes2++;
                     }
                }
                if(numberOfOnes2==numberOfOnes1){
                    cout << "SQUARE" << endl;
                }
                else{
                     cout << "TRIANGLE" << endl;
                }

    }
    return 0;
}
