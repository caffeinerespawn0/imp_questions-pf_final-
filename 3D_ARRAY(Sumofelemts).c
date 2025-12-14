#include<stdio.h>
#include<stdlib.h>
int main(){
int depth=3, rows=3,cols=3; 
//fill the matrix with random numbers between 1 and 100
int *matrix=malloc(rows*cols*depth*sizeof(int));
if(matrix==NULL){
    printf("Memory allocation failed");
    return 1; 
}
for(int k=0;k<depth;k++){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter value for[%d][%d][%d]: \n",k,i,j);
            scanf("%d",&matrix[k*rows*cols+i*cols+j]); 
        }
    }
}
int total=0; 
for(int k=0;k<depth;k++){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            total=total+matrix[k*rows*cols+i*cols+j]; 
    }
}
}
printf("Sum of all elements is 3D matrix: %d",total); 
free(matrix); 
return 0; 
}