#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);

    if (len % 2 != 0) {
        return false;
    }

    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char current = s[i];

        if (current == '(' || current == '{' || current == '[') {
            top++;
            stack[top] = current;
        } else {
            if (top == -1) {
                return false;
            }

            char last_opened = stack[top];
            top--; // pop

            if (current == ')' && last_opened != '(') {
                return false;
            }
            if (current == '}' && last_opened != '{') {
                return false;
            }
            if (current == ']' && last_opened != '[') {
                return false;
            }
        }
    }

    if (top == -1) {
        return true;
    } else {
        return false;
    }
}
