
/*
TITLE: Count by X
LINK: https://www.codewars.com/kata/5513795bd3fafb56c200049e/train/c
DESCRIPTION:Create a function with two arguments that will return an array of the first n multiples of x.
Assume both the given number and the number of times to count will be positive numbers greater than 0.
Return the results as an array or list ( depending on language ).

Examples
x = 1, n = 10 --> [1,2,3,4,5,6,7,8,9,10]
x = 2, n = 5  --> [2,4,6,8,10]
*/
#include <stdio.h>

void count_by(unsigned x, unsigned n, unsigned result[n]){
    for(int i = 0; i < n; i++){
        result[i] = (i + 1) * x;
    }
}
int main(){
    unsigned result[5];
    count_by(2, 5, result);
    for(int i = 0; i < 5; i++){
        printf("%f", result[i]);
    }
    return 0;
}