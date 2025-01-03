#include <stdio.h>
#include <limits.h>

void high_and_low (const char *strnum, char *result)
{
    // print your answer to <result> :
    int min = INT_MAX;
    int max = INT_MIN;
    int i = 0;
    while(strnum[i] != '\0'){
        int number;
        while(strnum[i] != ' ' && strnum[i] != '\0'){
            number += strnum[i] - '0';
            i++;
        }
        if(number != ' '){
            if(number < min){
                min = number;
            }
            if(number > max){
                max = number;
            }
        }
        i++;
    }
    sprintf(result, "%d %d", min, max);

}


int main(){
    return 0;
}