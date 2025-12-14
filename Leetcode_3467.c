#include <stdio.h>
int* transform_array(int nums[], int nums_size, int return_size[]) {
    static int result[500];  
    return_size[0] = nums_size;
    int count_even = 0;
    for (int i = 0; i < nums_size; i++) {
        if (nums[i] % 2 == 0) {
            count_even++;
        }
    }
    int idx = 0;
    for (; idx < count_even; idx++) {
        result[idx] = 0;
    }
    for (; idx < nums_size; idx++) {
        result[idx] = 1;
    }
    return result;
}
int main() {
    int nums[100];
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int return_size[1];
    int* output = transform_array(nums, n, return_size);
    printf("Transformed array (correct output):\n");
    for (int i = 0; i < return_size[0]; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");
    return 0;
}
