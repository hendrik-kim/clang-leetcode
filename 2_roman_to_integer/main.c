#include <stdio.h>
#include <assert.h>
#include "roman_to_int.h"

int main() {
    char s1[] = "III";
    assert(roman_to_int(s1) == 3);

    char s2[] = "LVIII";
    assert(roman_to_int(s2) == 58);

    char s3[] = "MCMXCIV";
    assert(roman_to_int(s3) == 1994);

    return 0;
}