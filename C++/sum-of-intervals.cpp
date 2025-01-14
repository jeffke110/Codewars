// LINK: https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp

#include <vector>
#include <climits>
#include <utility>
#include <algorithm>

int sum_intervals(std::vector<std::pair<int, int>> intervals){
    if(intervals.empty()){ return 0;}

    std::sort(intervals.begin(), intervals.end());

    int total_length = 0;
    int current_start = intervals[0].first;
    int current_end = intervals[0].second;

    for(const auto& [start, end] : intervals){
        if(start <= current_end){
            current_end = std::max(current_end, end);            
        }else{
            total_length += current_end - current_start;
            current_start = start;
            current_end = end;
        }
    }
    total_length += current_end - current_start;
    return total_length;
    }