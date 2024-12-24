#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int num)
{
    if(num < 1){ return false; }
    for(int i = 2; i < sqrt(num); i++){
        if( num % i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    printf("%s", is_prime(47) ? "True" : "False");
}