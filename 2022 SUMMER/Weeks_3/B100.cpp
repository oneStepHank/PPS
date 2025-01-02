#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> check;
        for(int i = 0 ; i < nums.size() ; i++)
            check[nums[i]]++;
        
        for(auto x : check){
            if(x.second >= 2)
                return true;
        }
        return false;
    }
};
