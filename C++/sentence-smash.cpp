/*
CODEWARS
LINK: https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/cpp
Title: Sentence Smash

Description:
Write a function that takes an array of words and concatenates them into a sentence. 
The function should return the sentence with words separated by spaces.
Note: 
- No additional punctuation is required.
- Ensure there are no leading or trailing spaces in the resulting sentence.

Input:
- An array of strings (words). Example: ['hello', 'world', 'this', 'is', 'great']

Output:
- A single string representing the concatenated sentence.
  Example: 'hello world this is great'

Example:
Input: ['hello', 'world', 'this', 'is', 'great']
Output: 'hello world this is great'

Assumptions
You can assume that you are only given words.
You cannot assume the size of the array.
You can assume that you do get an array.

*/

#include <vector>
#include <string>
#include <numeric>
#include <iostream>

/*
BinaryOperation op: A callable (e.g., a lambda function) that takes two arguments:
The first argument is the current value of the accumulator (initially init).
The second argument is the current element from the range.
*/

std::string smash(const std::vector<std::string> &words){

    return std::accumulate(words.begin(), words.end(), std::string{},  [](const std::string& result, const std::string& word){ return result.empty() ? word : result + " " + word;});

}

int main(){

    std::vector<std::string> Test = {"hello", "world", "this", "is", "great"};
    std::cout << smash(Test);


}