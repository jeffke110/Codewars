/*
#TITLE: Greed is good
#LINK: https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
*/

#include <vector>
#include <unordered_map>

int score(const std::vector<int>& dice) {
    std::unordered_map<int, int> diceCountMap;
    int sum = 0;
    for(const auto& score : dice){
        diceCountMap[score]++;
    }
    for(const auto& key : diceCountMap){
        if(key.first == 1){
            sum += (key.second >= 3 ? (1000 + ((key.second - 3) * 100) ) : key.second *  100 );
        }else if(key.first == 5){
            sum += (key.second >= 3 ? (500  + ((key.second - 3) * 50) ) : key.second *  50 );
        }else{
            sum +=  (key.second >= 3 ? key.first *  100 : 0)  ;
        }
    }
  return sum;
}
int main(){
    return 0;
}