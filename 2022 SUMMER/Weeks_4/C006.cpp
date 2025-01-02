#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> ans;
        for(int i = 0 ; i<s.size(); i++){
            ans[s[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(ans.find(s[i])->second == 1)
                return i;
        }
        return -1;
    }
    
};
