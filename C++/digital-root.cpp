/*
Digital root is the recursive sum of all the digits in a number.
Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced.
The input will be a non-negative integer.

Examples
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
*/
#include <iostream>

int digital_root(int n)
{
    if(n < 10){  return n; }
    int currDigit = n;
    int sum = 0;
    int i = 1;
    while(n > 0){
        currDigit = n % 10;
        sum += currDigit;
        n /= 10;
    }
    return digital_root(sum);
}

/*
int digital_root(int Z) {
    return --Z % 9 + 1;
}
*/
int main()
{
    std::cout << digital_root(122);
    return 0;
}