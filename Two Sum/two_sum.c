#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for result array
    int* ptr = (int*)malloc(2 * sizeof(int));
    if (ptr == NULL) {
        *returnSize = 0;
        return NULL;
    }

    // Iterate through each pair of indices (i, j)
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                // Found the pair, store indices in result array
                ptr[0] = i;
                ptr[1] = j;
                *returnSize = 2;
                return ptr;
            }
        }
    }

    // No solution found
    *returnSize = 0;
    free(ptr); // Free allocated memory
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 18;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* ptr = twoSum(nums, numsSize, target, &returnSize);
    
    if (ptr != NULL && returnSize == 2) {
      printf("Indices are: [%d, %d]\n", ptr[0], ptr[1]);
       free(ptr); // Free allocated memory
    } else {
       printf("No valid indices found.\n");
    }
    
    return 0;
}
