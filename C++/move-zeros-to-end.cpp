#include <iostream>
#include <vector>
#include <algorithm>    

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> output{input};
    auto iter = std::remove_if(output.begin(), output.end(), [](int integer){ return integer == 0;  });
    for(auto it = iter; it != output.end(); ++it){
        *it = 0;
    }
    return output;
}
int main(){
    const std::vector<int> input = {1, 0, 1, 2, 0, 1, 3};
    std::vector<int> output = move_zeroes(input);
    for(auto element : output){
        std::cout << element << std::endl;
    }

}