/*
LINK:https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp
Trolls are attacking your comment section!
A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
Your task is to write a function that takes a string and return a new string with all vowels removed.
For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
Note: for this kata y isn't considered a vowel.
*/

# include <string>
#include <algorithm>
#include <unordered_set>
#include <iostream>
std::string disemvowel(const std::string& str) {
    std::string copy(str);
    std::unordered_set<char> vowelList{'a', 'e', 'i', 'o','u'};
    auto iter = std::remove_if(copy.begin(), copy.end(), [&vowelList](char input){ return vowelList.find(towlower(input)) != vowelList.end(); });
    copy.erase(iter, copy.end());
    return copy;
}

int main(){
    std::string str = "hello";
    std::cout << disemvowel(str);
}

/*
# include <string>
# include <regex>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}



# include <string>

std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }
    
    return str;
}
*/