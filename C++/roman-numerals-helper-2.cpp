#include <iostream>
#include <string>
#include <vector>

class RomanHelper {

public:
    std::vector<std::pair<int, std::string>> romanVec = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    int from_Roman(std::string input){
        int sum = 0;
        std::string remaining = input;
        for(const auto& [num, value] : romanVec){
            auto pos = remaining.find(value);
            while(pos == 0){
                sum += num;
                remaining.erase(pos, value.size());
                pos = remaining.find(value);
            }   
        }
        return sum;
    }
    std::string to_Roman(int n){
        std::string output = "";
        for(const auto& [num, value] : romanVec){
            while(n >= num){
                output += value;
                n -= num;
            }
        }
        return output;
    }

};

int main(){
    RomanHelper test;   
    std::cout << test.from_Roman("IX") << std::endl;
    std::cout << test.to_Roman(146) << std::endl;
    return 0;
}