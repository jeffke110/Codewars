#include <string>

using namespace std;

int getCount(const string& inputStr){
  std::string vowels = "aeiou";
  int num_vowels = 0;

  for(const auto& element : inputStr){
    size_t pos = vowels.find(towlower(element));
    if(pos != std::string::npos){
        num_vowels++;
    }
  }
  return num_vowels;
}

int main(){
    return 0;
}