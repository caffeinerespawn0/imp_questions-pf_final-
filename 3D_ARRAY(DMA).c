#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int depth=2,rows=2,cols=2; 
    int *matrix=malloc(depth*rows*cols*sizeof(int));
    for(int k=0;k<depth;k++){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("Enter value of [%d][%d][%d]: ",i,j,k);
                scanf("%d",&matrix[k*rows*cols+i*cols+j]); 
            }
        }
    }
    for(int k=0;k<depth;k++){
         printf("Layer %d:\n",k+1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d",matrix[k*rows*cols+i*cols+j]);
            }
            printf("\n");
        }
    }
    return 0; 
}
