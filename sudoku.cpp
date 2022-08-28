#include <iostream>
#include<vector>
using namespace std;


int bo[9][9] = {
   {3, 0, 6, 5, 0, 8, 4, 0, 0},
   {5, 2, 0, 0, 0, 0, 0, 0, 0},
   {0, 8, 7, 0, 0, 0, 0, 3, 1},
   {0, 0, 3, 0, 1, 0, 0, 8, 0},
   {9, 0, 0, 8, 6, 3, 0, 0, 5},
   {0, 5, 0, 0, 9, 0, 6, 0, 0},
   {1, 3, 0, 0, 0, 0, 2, 5, 0},
   {0, 0, 0, 0, 0, 0, 0, 7, 4},
   {0, 0, 5, 2, 0, 6, 3, 0, 0}
};

//bool possible(bo,int row,int col,int val);

bool po(bo,int r,int col,int val){
 for(int i=1;i<9;i++){
  if(board[r][i] == val) return 0;
  if(board[i][col] == val) return 0;
  if(board[3*(r/3) + 1/3][3*(col/3)+1%3])
     return 0;
 }
 
 return 1;
}

void solve(){
 int n = 9;
 
 for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
   if(bo[i][j] == 0){
    for(int val=1; val<9;val++){
     if(po(bo,i, j,val)){
      bo[i][j] = val;
     } else {
      bo[i][j] = 0;
     }
    }
   }
  }
 }
}

int main(){

 solve(bo);
 
 return 0;
}