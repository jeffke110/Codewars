#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class RomanHelper{
  public:

    std::vector<std::pair<int, std::string>> romanValues = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, 
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    std::string to_roman(unsigned int n){
        std::string output = "";
        for (const auto& [value, symbol] : romanValues){
            while(n >= value){
                output += symbol;
                n -= value;
            }
        }
      return output;
    }   
    int from_roman(std::string rn){
        int sum = 0;
        std::string remaining = rn;
        for(const auto& [value, symbol] : romanValues){
            auto pos = rn.find(symbol);
            while(pos == 0 ){
                sum += value;
                rn.erase(0, symbol.length());
                pos = rn.find(symbol);
            }
        }
        return sum;
    }
} RomanNumerals;