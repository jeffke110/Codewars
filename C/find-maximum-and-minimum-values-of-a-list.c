/*
Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) 
that receive a list of integers as input, and return the largest and lowest number in that list, respectively. 
Each function returns one number.
*/

#include <stdio.h>
#include <limits.h>

int min(int* array, int arrayLength)
{
    int min = __INT_MAX__;
    for(int i = 0; i < arrayLength; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
  return min;
}

int max(int* array, int arrayLength)
{
    int max = INT_MIN;
    for(int i = 0; i < arrayLength; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
  return max;
}

int main(){
    int array[] = {4,6,2,1,9,63,-134,566};
    printf("%d", min(array, 8));
}

