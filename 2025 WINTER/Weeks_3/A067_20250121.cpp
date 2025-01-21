#include<string>
#include<algorithm>
#include<stack>
using namespace std;
class Solution
{
public:
    string removeDuplicates(string s) {
        stack<char> res;
        res.push(s[0]);
        for(size_t i = 1; i< s.size() ; i++){
            if(!res.empty() && res.top() == s[i]){
                res.pop();
                continue;
            }
            res.push(s[i]);
        }
        string ans;
        while(!res.empty()){
            ans += res.top();
            res.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};