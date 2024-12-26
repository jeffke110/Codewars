#include <stdio.h>
#include <stdbool.h>

bool valid_braces(const char *braces)
{
    int openParaCount = 0;
    int openSquareCount = 0;
    int openBrackCount = 0;
    for (size_t i = 0; braces[i] != '\0'; i++)
    {
        switch (braces[i])
        {
        case '(':
            openParaCount++;
            break;
        case '{':
            openBrackCount++;
            break;
        case '[':
            openSquareCount++;
            break;
        case ')':
            if (openParaCount <= 0)
            {
                return false;
            }
            openParaCount--;
            break;
        case '}':
            if (openBrackCount <= 0)
            {
                return false;
            }
            openBrackCount--;
            break;
        case ']':
            if (openSquareCount <= 0)
            {
                return false;
            }
            openSquareCount--;
            break;
        }
    }
    if(openParaCount ==0 && openBrackCount == 0 && openSquareCount == 0){
        return true;
    }
    return false;
}

int main(){
    char braces[] = "())";
    printf("%s", valid_braces(braces) ? "True" : "False");
}