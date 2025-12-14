#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int *matrix = malloc(rows *
        
         cols * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // input values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i*cols + j]);
        }
    }

    // print matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
          printf("%d ", matrix[i*cols + j]);
    }
    printf("\n");    
}
free(matrix);
return 0;
    }
