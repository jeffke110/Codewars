#include <cinttypes>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>

//LINK: https://www.codewars.com/kata/5467e4d82edf8bbf40000155/train/cpp


uint64_t descendingOrder(uint64_t a)
{
  uint64_t currentDigit{1};
  std::vector<uint64_t> nums; 

  while(a > 0){
    currentDigit = a % 10;
    nums.push_back(currentDigit);
    a /= 10;
  }

  std::sort(nums.begin(), nums.end());
  
  uint64_t tens = 1;
  uint64_t sum{0};
  for(const auto& element : nums){
    sum = sum + element * tens;
    tens *= 10;
  }
  return sum;

}
int main(){
    std::cout << descendingOrder(42145);
    return 0;
}

/*
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
*/