#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "longest_common_prefix.h"

char* longest_common_prefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }
    char* result = (char*)malloc(sizeof(char) * (strlen(strs[0]) + 1));
    size_t index = 0;

    while (true) {
        char currentChar = strs[0][index];

        if (currentChar == '\0') {
            break;
        }

        bool isCommon = true;
        size_t i;

        for (i = 1; i < strsSize; i++) {
            if (strs[i][index] != currentChar) {
                isCommon = false;
                break;
            }
        }

        if (!isCommon) {
            break;
        }

        result[index] = currentChar;
        index++;
    }

    result[index] = '\0';
    return result;
}