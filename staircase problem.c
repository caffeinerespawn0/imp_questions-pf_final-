//A person is climbing a staircase with N steps.
//They can take either 1 step or 2 steps at a time.
//You need to find how many different ways they can reach the top.
#include<stdio.h>
int ways(int n){
    if(n==1){
        return 1; 
    }
    else if(n==0){
        return 1
    ; 
    }
    else{
       return ways(n-1)+ways(n-2);
    }
}
int main(){
    int n=4;
    printf("%d",ways(n));
    return 0;
}