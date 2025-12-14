#include<stdio.h>
#include<stdlib.h>
int board[10]; 
int n=4; 
int safe(int row,int col){
    for(int i=0;i<row;i++){
        if(board[i]==col){
            return 0; //checking if row=col
        }
        if(abs(board[i]-col)==abs(row-i)){
            return 0; //diagonal check
        }
    }
    return 1; 
}
void solve(int row){
    if(row==n){
        for(int i=0;i<row;i++){
            printf("%d",board[i]+1);
        }
           printf("\n");
            return; 
    }
    for(int col=0; col<n;col++){
        if(safe(row,col)){
            board[row]=col;
            solve(row+1);
        }
    }
}
int main(){
    solve(0);
    return 0; 
}