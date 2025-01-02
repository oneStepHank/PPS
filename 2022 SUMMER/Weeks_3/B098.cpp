#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> count;
        for(int i = 0 ; i<nums.size() ; i++){
            count[i+1]=0;
        }
        for(auto x : nums)
            count[x]++;
        vector<int> find;
        for(auto x : count)
            if(x.second == 0)
                find.push_back(x.first);
        return find;
    }
};
