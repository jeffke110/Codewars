#include <stdio.h>
#include <ctype.h>

char * accum(const char * source){
    char * output;
    int length = 0;
    for(int i = 0; source[i] != '\0'; i++){
        length += (i + 1);
    }
    length += strlen(source); // for each '-' seperator
    length += 1; // for '\0' null terminator
    output = (char *)malloc(length * sizeof(char));

    if(!output){
        return NULL;
    }


    int outputIndex = 0;
    for(int i = 0; source[i] != '\0'; i++){
        for(int j = 0; j < i + 1; j++){
            if(j == 0){
                output[outputIndex++] = toupper(source[i]);
            }else{
                output[outputIndex++] = tolower(source[i]);
            }
        }
        if(source[i + 1] != '\0'){
            output[outputIndex++] = '-';
        }
    }
    output[outputIndex] = '\0';
    return output;
}

int main(){
    printf("%s", accum("hello"));
    return 0;
}
