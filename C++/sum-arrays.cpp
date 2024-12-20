/*
LINK: https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/cpp
*/
#include <vector>
#include <numeric>
#include <iostream>

int sum(std::vector<int> nums)
{
    return std::accumulate(nums.begin(), nums.end(), 0);
}

int main()
{
    std::cout << sum({1, 2, 3, 4, 5});
    return 0;
}