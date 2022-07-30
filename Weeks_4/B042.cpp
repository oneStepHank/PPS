#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, Lcount = 0, Rcount = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'R')
                Rcount++;
            else
                Lcount++;
            
            if(Lcount == Rcount)
                ans++;
        }
        return ans;
    }
};
