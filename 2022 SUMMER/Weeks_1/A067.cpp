//A067
class Solution {
public:
    string removeDuplicates(string s) {
        string str = "";
        str.push_back(s[0]);
        for(int i = 1 ; i< s.size() ; i++){
            if(s[i] == str.back()){
                str.pop_back();
            }
            else
                str.push_back(s[i]);
        }
        return str;
    }
};
