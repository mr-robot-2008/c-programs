#include <stdio.h>
#include <stdlib.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int xr = 0; // Initialize a variable to store the XOR result.

    for (int i = 0; i < numsSize; i++) {
        xr ^= nums[i]; // XOR all elements in the nums array.
        xr ^= (i + 1); // XOR with expected values (1 to n).
    }

    int idx = 0;

    // Find the rightmost set bit (indicated by 'idx') in the XOR result.
    while (1) {
        if (xr & (1 << idx)) break;
        idx++;
    }

    // Initialize variables for the first and second numbers to be found.
    int f = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] & (1 << idx)) f ^= nums[i]; // XOR elements with the same set bit as idx.
        int x = i + 1;
        if (x & (1 << idx)) f ^= x; // XOR expected values with the same set bit as idx.
    }

    int s = xr ^ f; // Calculate the second number.

    // Check if 'f' already exists in the nums array.
    int flag = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == f) {
            flag = 1;
            break;
        }
    }

    *returnSize = 2;

    int* result = (int*)malloc(2 * sizeof(int));
    if (flag) {
        result[0] = f;
        result[1] = s;
    } else {
        result[0] = s;
        result[1] = f;
    }

    return result;
}

int main() {
    int nums[] = {1, 2, 2, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = findErrorNums(nums, numsSize, &returnSize);

    printf("Result: [%d, %d]\n", result[0], result[1]);
    free(result);

    return 0;
}
