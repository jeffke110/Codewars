//https://www.codewars.com/kata/5208f99aee097e6552000148/train/c

#include <stddef.h> // NULL
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
    int spacingCount = 0;
    for(int i = 0; camelCase[i] != '\0'; i++){
        if(isupper(camelCase[i])){
            spacingCount++;
        }
    }
   int length = strlen(camelCase) + spacingCount + 1; 
   char * output = (char *)malloc( length * (sizeof(char)));
   if(!output){
     return NULL;
   }
   int outputIndex = 0;
    for(int i = 0; camelCase[i] != '\0'; i++){
        if(isupper(camelCase[i])){
            output[outputIndex++] = ' ';
        }
        output[outputIndex++] = camelCase[i];
    }
    output[outputIndex] = '\0';
   
   return output;
}
int main(){
    printf("%s", solution("camelCasing"));
}