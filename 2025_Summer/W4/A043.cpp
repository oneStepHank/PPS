class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string lcp = strs[0];
       int max_length = lcp.size();
       for(int i = 1; i<strs.size(); i++){
            string new_lcp = "";
            max_length = max_length < strs[i].size()? max_length : strs[i].size();
            for(int j = 0 ; j < max_length; j++){
                if(lcp[j]==strs[i][j])
                    new_lcp += lcp[j];
                else{
                    if(j==0)
                        return "";
                    break;
                }
            }
            lcp = new_lcp;
       }
       return lcp;
    }
};