#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
int num=5;
printf("%d",sum(5));
return 0; 
}