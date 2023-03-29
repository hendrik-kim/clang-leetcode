#include <stdio.h>
#include <assert.h>
#include "valid_parentheses.h"

int main() {
    char str1[] = "()[]{}";
    char str2[] = "({[({})]})";
    char str3[] = "()[]{}]{";
    char str4[] = "{()[]{}]{";

    assert(is_valid(str1) == true);
    assert(is_valid(str2) == false);
    assert(is_valid(str3) == false);
    assert(is_valid(str4) == false);
}