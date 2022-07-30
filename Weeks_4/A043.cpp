#include <iostream>
#include <algorithm> // reverse
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(), strs.end()); // 문자열 크기가 작은 순서대로
        int index;
        for (index = 0; index < strs[0].size() && index < (strs.back()).size(); index++) {
            if (strs[0][index] != (strs.back())[index]) break;
        }
        return strs[0].substr(0, index);
    }
};
