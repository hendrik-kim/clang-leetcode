#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_valid(char* s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }

    if (len % 2 != 0) {
        return false;
    }

    char* stack = (char*)malloc(len + 1);
    int top = -1;

    size_t i;
    for (i = 0; i < len; i++) {
        char current = s[i];

        if (current == '(' || current == '{' || current == '[') {
            top++;
            stack[top] = current;
        }
        else {
            if (
                top == -1
                || (current == ')' && stack[top] != '(')
                || (current == '}' && stack[top] != '{')
                || (current == ']' && stack[top] != '[')
                )
            {
                free(stack);
                return false;
            }
            else {
                top--;
            }
        }
    }

    bool result = top == -1; // If the stack is not empty, the input string is not valid
    free(stack);
    return result;
}