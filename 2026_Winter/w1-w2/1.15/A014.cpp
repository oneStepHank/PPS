/*
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b

*/
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0)
            return res;
        int start = nums[0];
        for(int i = 1 ; i<= nums.size(); ++i){
            if(i==nums.size() || nums[i]!=nums[i-1]+1){ // if cur_value != pre_value + 1
                // i == n -> nums[i] isn't refered.
                string s = "";
                // pre_value(nums[i-1]) : 연속된 수의 마지막 수
                if(start == nums[i-1]) // 그 수가, 연속된 수의 시작과 동일하다면
                    s = to_string(start);
                else // 범위가 있다면 start -> pre_value(nums[i-1])
                    s = to_string(start)+"->"+to_string(nums[i-1]);
                res.push_back(s);
                
                if(i < nums.size()) // i < nums.size() : 아직 순회할 수가 남아있음
                    start = nums[i]; // 연속된 수의 새로운 start 업데이트
            }
        }
        return res;
    }
};