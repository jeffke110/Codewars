/*
TITLE: Replace With Alphabet Position
LINK: https://www.codewars.com/kata/546f922b54af40e1e90001da/train/cpp
In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
Input = "The sunset sets at twelve o' clock."
Output = "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"
*/

#include <string>
#include <iostream>


std::string alphabet_position(const std::string &text) {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string output;
    for(int i = 0; i < text.size(); i++){
        size_t pos = alphabet.find(tolower(text[i])) + 1;

        if(isalpha(text[i]) && pos!=  std::string::npos){
            if(!output.empty()){
                output.append(" ");
            }
            output.append(std::to_string(pos)); 
        }
    }
  return output;
}

int main(){
    return 0;
}