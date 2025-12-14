#include <stdio.h>
void rotate(int** matrix, int matrixSize, int* matrixColSize){
    for(int i = 0; i < matrixSize; i++){
        for(int j = i + 1; j < matrixSize; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(int i = 0; i < matrixSize; i++){
        int left = 0, right = matrixSize - 1;
        while(left < right){
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;
            left++;
            right--;
        }
    }
}
int main() {
    int n = 3;
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    int* matrix[3];
    for(int i = 0; i < n; i++){
        matrix[i] = arr[i];
    }

    int colSize = 3;
    rotate(matrix, n, &colSize);
    printf("Rotated Matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
