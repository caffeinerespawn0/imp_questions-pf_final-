#include<stdio.h>
int main(){
    int arr[500]; 
    int elements=0; 
    int n; 
    int new_arr[500];
    int j; 
    for(int i=0;i<500;i++){
        printf("Enter the values of your array, press 0 to stop\n");
        scanf("%d",&arr[i]);
        if(arr[i]==0){
        break; 
        }
        elements++;
        
    }
    n=elements/2;
    int i=0;
    j=n; 
    for(int k=0;k<elements;k=k+2){
        new_arr[k]=arr[i]; 
        new_arr[k+1]=arr[j]; 
        i++; 
        j++;
    }
    for(int k=0;k<2*n;k++){
        printf("%d\t",new_arr[k]);
    }
    return 0;  
}