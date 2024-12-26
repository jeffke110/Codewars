#include <stdio.h>
#include <stdbool.h>

bool valid_braces(const char *braces)
{
    char stack[256];
    int top = -1;

    for (int i = 0; braces[i] != '\0'; i++)
    {
        switch (braces[i])
        {
        case '(':
        case '{':
        case '[':
            stack[++top] = braces[i];
            break;
        case ')':
            if (top < 0 && top != braces['('])
            {
                return false;
            }
            top--;
            break;
        case '}':
            if (top < 0 && top != braces['{'])
            {
                return false;
            }
            top--;
            break;
        case ']':
            if (top < 0 && top != braces['{'])
            {
                return false;
            }
            top--;
            break;
        };
    }
    return top == -1;
}

int main()
{
    char braces[] = "())";
    printf("%s", valid_braces(braces) ? "True" : "False");
}