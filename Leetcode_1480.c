#include<stdio.h>
int main(){
    int arr[1000]; 
    int new_arr[1000];
    int elements=0; 
    int prev_sum;
    for(int i=0;i<1000;i++){
        printf("Enter the value of your array, press 0 to stop\n"); 
        scanf("%d",&arr[i]);
        elements++;
        if(arr[i]==0){
            break; 
        } 
        else{ 
            continue; 
        }
    }
    prev_sum=0;
    for(int i=0;i<elements;i++){
       new_arr[i]=arr[i]+prev_sum; 
       prev_sum=new_arr[i]; 
    }
    for(int i=0;i<elements;i++){
        printf("%d\t",new_arr[i]);
    }
    return 0; 
}