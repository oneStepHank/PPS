#include <string>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0 ; i< s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i]))
                str += tolower(s[i]);
        }
        string check;
        check = str;
        reverse(check.begin(), check.end());
        return check == str;
    }
};
