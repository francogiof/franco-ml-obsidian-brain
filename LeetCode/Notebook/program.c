#include <stdio.h>
#include <stdlib.h>

int *twoSum(const int *nums, int numsSize, int target, int *returnSize) {
    int *result = malloc(2 * sizeof(*result));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    free(result);
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int nums[] = {2, 7, 11, 15};
    int returnSize = 0;
    int *result = twoSum(nums, 4, 9, &returnSize);

    if (result != NULL) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    }

    return 0;
}
