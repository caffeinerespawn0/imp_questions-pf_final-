#include<stdio.h>
int digitalroot(int n){
    int sum=0;
    if(n<10){
        return n;
    }
    else{
        while(n>0){
        sum=sum+(n%10);
        n=n/10; 
    } 
        return digitalroot(sum); 
    }
}
int main(){
    int n=987;
    printf("The digital root is: %d",digitalroot(n));
    return 0; 
}