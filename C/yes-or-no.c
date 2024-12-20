#include <stdbool.h>
#include <stdio.h>

const char *bool_to_word (bool value){
    return value ? "Yes" : "No";
}
int main(){
    printf("%s \n", bool_to_word(true));
    printf("%s \n", bool_to_word(false));
    return 0;
}
