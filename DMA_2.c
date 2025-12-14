#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of seats: ");
    scanf("%d",&n);
    int *seats=malloc(n*sizeof(int));
    if(seats==NULL){
        printf("Memory allocation failed\n");
    }
    for(int i=0;i<n;i++){
        printf("\n---Enter the seat numbers:---\n");
        printf("%d: \n",i+1);
        scanf("%d",&seats[i]);
    }
    int new_n;
    printf("Is there any increment in the number of seats(type the same number is none: )");
    scanf("%d",&new_n);
    if(new_n>n){
        int *temp=realloc(seats,new_n*sizeof(int));
        if(temp==NULL){
        printf("Memory allocation failed\n");
    }
    }
    for(int j=n;j<new_n;j++){
        printf("Enter the seats number further: \n");
        printf("%d: ",j+1);
        scanf("%d",&seats[j]); 
    }
    printf("\n---Final List---\n");
    for(int i=0;i<new_n;i++){
        printf("Seat %d:  %d\n",i+1,seats[i]);
    }
    free(seats);
    return 0; 

}