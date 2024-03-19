#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int NewRows[8];
int rows[8];
int MinMoves;
bool isSafe(int row,int col){
    /*//check row
    for(int i=0;i<8;i++){
        if(board[row][i]==1){
            return false;
        }
    }
    //check Diagonal '\'
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
       if(board[i][j]==1){
        return false;
       }
    }
     for(int i=row,j=col;i<8&&j<8;i++,j++){
       if(board[i][j]==1){
        return false;
       }
    }
    //check Diagonal '/'
     for(int i=row,j=col;i>=0&&j>=0;i--,j++){
       if(board[i][j]==1){
        return false;
       }
    }
     for(int i=row,j=col;i<8&&j<8;i++,j--){
       if(board[i][j]==1){
        return false;
       }
    }
    return true;*/
    for(int c=0;c<col;c++){
        if((col-c==abs(NewRows[c]-row))||NewRows[c]==row) return false;
    }
    return true;
}

void Queens(int colIndx){
    if(colIndx==8){
        int temp = 0;
        for(int i=0;i<8;i++){
            if(rows[i]!=NewRows[i]){
                temp++;
            }
        }
        MinMoves = min(temp,MinMoves);
        return ;
    }
    for(int i=1;i<=8;i++){
                if(isSafe(i,colIndx)){
                    NewRows[colIndx]=i;
                    Queens(colIndx+1);
                }

        }

}
int main()
{


   int Case=1;
   while(scanf("%d %d %d %d %d %d %d %d", &rows[0],&rows[1],&rows[2],&rows[3],&rows[4],&rows[5],&rows[6],&rows[7])==8){
    MinMoves=INT_MAX;
    Queens(0);
    cout<<"Case "<<Case<<": "<<MinMoves<<endl;
    Case++;

   }
    return 0;
}
