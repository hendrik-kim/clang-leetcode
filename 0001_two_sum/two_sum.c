#include <stddef.h>
#include <stdlib.h>
#include "two_sum.h"

int* two_sum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(sizeof(int) * 2);

    *returnSize = 2;
    size_t i;
    size_t j;

    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}