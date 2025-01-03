#include <stdint.h>

//LINK: https://www.codewars.com/kata/55cb632c1a5d7b3ad0000145/train/c

char *hoop_count(uint32_t n){
    if(n >= 10){
        return "Great, now move on to tricks";
    }else{
        return "Keep at it until you get it";
    }
}
int main(){
    return 0;
}