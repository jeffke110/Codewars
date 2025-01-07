#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void to_camel_case(const char *text, char *camel) {
        //iterate through string
        bool upperCase = false;
        int camelIndex = 0;
        for(int i = 0; text[i] != '\0'; i++){
            if(upperCase == true){
                camel[camelIndex] = toupper(text[i]);
                camelIndex++;
                upperCase = false;
            }
            else if(text[i] == '-' || text[i] == '_'){
                upperCase = true;
            }else{
                camel[camelIndex] = text[i];
                camelIndex++;
            }
        }

        camel[camelIndex] = '\0';

}