#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> smap;
        map<char, int> tmap;
        for(int i = 0 ; i< s.length(); i++){
            if(smap[s[i]] != tmap[t[i]])
                return false;
            
            smap[s[i]] = i+1;
            tmap[t[i]] = i+1;
        }
        return true;
    }
};
