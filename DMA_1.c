#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n=0; 
    printf("How many deliveries currently?");
    scanf("%d",&n); 
    float *distance=(float *)malloc(n*sizeof(float));//every pointer is an array
    if(distance==NULL){
        printf("Memory Allocation Failed");
        return 1; 
    }
    for(int i=0;i<n;i++){
        printf("Enter distance for delivery: %d\n",i+1); 
        scanf("%f",&distance[i]); 
    }
    int new_n=0;
    printf("Are there any update in deliveries(enter the same number if its the same):\n ");
    scanf("%d",&new_n);//this would be the new total (if it was 5 before, and 7 now, the user would enter 7)
    distance=(float *)realloc(distance,new_n*sizeof(float));
    if(new_n>n){
        for(int i=n;i<new_n;i++){
            printf("Enter distance for delivery %d:",i+1);
            scanf("%d",&distance[i]); 
        }
    }
    if(distance==NULL){
        printf("Memory Allocation Failed");
        return 1; 
    } 
    float total=0; 
    printf("\nFinal Route:\n"); 
    for(int k=0;k<new_n;k++){
        printf("Delivery %d: %.2f km",k+1,distance[k]);
        total=total+distance[k]; 
    }
    printf("Total distance:%.2f: ",total); 
    free(distance); 
    return 0; 
}

