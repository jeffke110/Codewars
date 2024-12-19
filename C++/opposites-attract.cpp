/*
TITLE: Opposites Attract
LINK: https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp

DESCRIPTION:
Timmy & Sarah think they are in love, but around where they live, they will only know once they pick a flower each. 
If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.
Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.
*/
#include <cassert>
#include <iostream>

bool lovefunc(int f1, int f2){
    if( (f1 % 2 == 0 && f2 % 2 != 0) || (f1 % 2 != 0 && f2 % 2 == 0)  ){
        return true;
    }
    return false;
}
/*
return (a + b) % 2;
return f1 % 2 != f2 % 2
*/
void test() {
    assert(lovefunc(1,2) == true);
    assert(lovefunc(0, 3) == true);
    assert(lovefunc(99, 198) == true);
    assert(lovefunc(0, 0) == false);
    assert(lovefunc(2, 2) == false);
    assert(lovefunc(101, 101) == false);
    std::cout << "All tests passed!" << std::endl;
}
int main(){
    test();
    return 0;

}