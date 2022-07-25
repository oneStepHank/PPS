#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> uset{'a', 'e', 'i', 'o', 'u'};
        int cnt1 = 0, cnt2 = 0;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i < s.length() / 2; i++)
            if(uset.count(s[i])) cnt1++;
        for(int i = s.length() / 2; i < s.length(); i++)
            if(uset.count(s[i])) cnt2++;
        return cnt1 == cnt2;
    }
};
