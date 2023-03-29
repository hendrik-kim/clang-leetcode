#include <stdlib.h>
#include "roman_to_int.h"

int roman_to_int(char* s) {
    int result = 0;
    size_t i;

    for (i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
        case 'M':
            result += 1000;
            break;
        case 'D':
            result += 500;
            break;
        case 'C':
            result += (s[i + 1] == 'D' || s[i + 1] == 'M') ? -100 : 100;
            break;
        case 'L':
            result += 50;
            break;
        case 'X':
            result += (s[i + 1] == 'L' || s[i + 1] == 'C') ? -10 : 10;
            break;
        case 'V':
            result += 5;
            break;
        case 'I':
            result += (s[i + 1] == 'V' || s[i + 1] == 'X') ? -1 : 1;
            break;
        }
    }
    return result;
}