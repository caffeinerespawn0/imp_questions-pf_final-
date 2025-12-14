/*You work at an ice cream shop. Each day, the shop sells a certain number of ice cream cones. 
The manager wants to know the total number of ice creams sold over n days,
but you can only check one day at a time.You need to write a recursive function to calculate the total sales.*/
#include<stdio.h>
int tsales(int sales[],int n){
    if(n==0){
        return 0; 
    }
    else{
        return sales[n-1]+tsales(sales,n-1);
    }
}
int main(){
    int sales[] = {5, 8, 12, 4, 10};
    int n = 5;
    printf("Total sales: %d",tsales(sales,n));
    return 0;
}