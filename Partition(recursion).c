//write a function that counts the number of ways you can partition n objects upto m
#include<stdio.h>
int divisions(int n,int m){
    if(n==0){
        return 1; 
    }
    if(n<1){
        return 0; 
    }
    if(m==0){
        return 0; 
    }
    return divisions(n-m,m) + divisions(n,m-1); 
}
int main(){
    int n=5;
    int m=3; 
    int result=divisions(n,m);
    printf("%d",result);
    return 0;
}