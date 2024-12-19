/*
TITLE: Isograms
LINK: https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/cpp
DESCRIPTION:
An isogram is a word that has no repeating letters, consecutive or non-consecutive. 
Implement a function that determines whether a string that contains only letters is an isogram. 
Assume the empty string is an isogram. Ignore letter case.
*/

#include <string>
#include <unordered_map>
#include <algorithm>

bool is_isogram(const std::string& str)
{
    if(str.empty()){return true;}
    std::unordered_map<char, int> letterMap;
    for(const auto& element : str){ if( ++letterMap[tolower(element)] > 1 && isalnum(element) ){ return false; }; }
    return true;
}

int main(){
    return 0;
}