#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        vector<int> first;
        for(int i = 0 ; i< s.size(); i ++){
            if(s[i] >= '0' and s[i] <= '9')
                first.push_back(s[i]-'0');
        }
        sort(first.begin(), first.end(),greater<>());
        first.erase(unique(first.begin(), first.end()), first.end());
        
        if(first.size() <= 1)
            return -1;
        
        return first[1];
    }
};
