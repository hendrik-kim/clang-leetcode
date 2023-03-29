#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "longest_common_prefix.h"

int main() {
    char* strs1[] = { "flower", "flow", "flight" };
    char* strs2[] = { "dog", "racecar", "car" };

    char* result1 = longest_common_prefix(strs1, sizeof(strs1) / sizeof(char*));
    char* result2 = longest_common_prefix(strs2, sizeof(strs2) / sizeof(char*));

    assert(strlen(result1) == 2 && strlen(result2) == 0);

    free(result1);
    free(result2);
};