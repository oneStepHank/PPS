class Solution {
public:
    char findTheDifference(string s, string t) {
        int ascii_1 = 0, ascii_2 = 0;
        
        for(int i = 0 ; i< s.size(); i++){
            ascii_1 += s[i];
        }
        
        for(int i = 0 ; i< t.size(); i++){
            ascii_2 += t[i];
        }
        return char(ascii_2 - ascii_1);
    }
};
