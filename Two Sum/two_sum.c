#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for result array
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    // Iterate through each pair of indices (i, j)
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                // Found the pair, store indices in result array
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    // No solution found
    *returnSize = 0;
    free(result); // Free allocated memory
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* result = twoSum(nums, numsSize, target, &returnSize);
    
    if (result != NULL && returnSize == 2) {
        printf("Indices are: [%d, %d]\n", result[0], result[1]);
        free(result); // Free allocated memory
    } else {
        printf("No valid indices found.\n");
    }
    
    return 0;
}
