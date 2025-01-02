#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char, int> smap, tmap;
        for(char x : s){
            smap[x]++;
        }
        for(char x : t){
            tmap[x]++;
        }
        for(int i = 0 ; i< s.size() ; i++){
            if(smap[s[i]] != tmap[s[i]])
                return false;
        }
        return true;
    }
};
