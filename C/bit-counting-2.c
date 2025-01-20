#include <stddef.h>
#include <stdio.h>

size_t countBits(unsigned value){
    int bitCount = (sizeof(value) * 8);
    int countOne = 0;
    for(int i = bitCount - 1; i >= 0; i--){
        int bit = (value >> i ) & 1;
        if(bit == 1){
            countOne++;
        }
    }
    return countOne;
}

int main(){
    printf("%d", countBits(15));
    return 0;
}