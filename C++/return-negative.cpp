/*
TITLE: Return Negative
LINK: https://www.codewars.com/kata/55685cd7ad70877c23000102/train/cpp
DESCRIPTION:
In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?
*/

int makeNegative(int num){
    return num < 0 ? num : num * -1;
}

int main(){
    return 0;
}