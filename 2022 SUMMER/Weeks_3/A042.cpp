#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string t1, t2;
        
        for(int i = 0 ; i < s.size() ; i++){
            if(!t1.empty() && s[i] == '#')
                t1.pop_back();
            else if(s[i] != '#')
                t1.push_back(s[i]);
        }
        
         for(int i = 0 ; i < t.size() ; i++){
            if(!t2.empty() && t[i] == '#')
                t2.pop_back();
            else if(t[i] != '#')
                t2.push_back(t[i]);
        }
        
        return t1.compare(t2) == 0;
    }
};
