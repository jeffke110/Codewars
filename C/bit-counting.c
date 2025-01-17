// https://www.codewars.com/dashboard

#include <stddef.h>
#include <stdio.h>

size_t countBits(unsigned value){
    int bitCount = (sizeof(value)) * 8;
    int oneCount = 0;
    for(int i = bitCount -1; i >= 0; i--){
        int bit = (value>>i) & 1;
        if(bit == 1){
            oneCount++;
        }
    }
    return oneCount;
}

int main(){
    countBits(4);

}