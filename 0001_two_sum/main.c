#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "two_sum.h"

int main() {
    int nums[] = { 2,7,11,15 };
    int target = 9;
    int returnSize;
    int* result = two_sum(nums, sizeof(nums) / sizeof(int), target, &returnSize);

    assert(result[0] == 0 && result[1] == 1);

    free(result);

    return 0;
}