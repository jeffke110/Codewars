#include <iostream>
#include <cmath>

// Returns number of complete beeramid levels
int beeramid(int bonus, double price)
{
    int beerAmount = std::floor(bonus/price);
    int square = 0;
    while(beerAmount >= (square + 1) * (square + 1)){
        square++;
        beerAmount -= (square * square);
        
    }
  return square;
}

int main(){
    std::cout << beeramid(1500, 2) << std::endl;
    std::cout << beeramid(5000, 3) << std::endl;
    return 0;
}