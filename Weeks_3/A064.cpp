#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights);
        sort(expected.begin(), expected.end());
        int checker = 0;
        for(int i = 0; i < heights.size(); i++)
            if(expected[i] != heights[i])
                checker++;
        return checker;
    }
};
