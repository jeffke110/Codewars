/*
#TITLE: ROT13
#LINK: https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. 
ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. 
If there are numbers or special characters included in the string, they should be returned as they are. 
Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".

*/
#include <string>
#include <vector>

std::string rot13(std::string msg)
{
    std::string output;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
    for(const auto& element : msg){
        size_t pos = alphabet.find(tolower(element));
        if(pos != std::string::npos){
            pos = (pos + 13 >= alphabet.size()) ? pos - 26 + 13: pos + 13;
            char add = (islower(element) ?  alphabet[pos] : toupper(alphabet[pos]));
            output.push_back(add);
        }else{
            output.push_back(element);
        }
    }
    return output;
}
int main(){
    return 0;
}

/*
std::string rot13(std::string msg)
{
  for(auto& x : msg) 
    if (islower(x)) x = 'a'+(x-'a'+13)%26; 
    else if(isupper(x)) x = 'A'+(x-'A'+13)%26;
  return msg;
}


*/