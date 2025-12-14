//Initialize the matrix with values such that each element stores the sum of its indices.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int depth=3,rows=3,cols=3; 
    int *matrix=malloc(depth*rows*cols*sizeof(int)); 
    for(int k=0;k<depth;k++){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                matrix[k*rows*cols+i*cols+j]=i+j+k;
            }
        }
    }
    for(int k=0;k<depth;k++){
        printf("\n---Layer %d---\n",k+1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d",matrix[k*rows*cols+i*cols+j]);
        }
        printf("\n");
    }
}
free(matrix); 
return 0; 
}