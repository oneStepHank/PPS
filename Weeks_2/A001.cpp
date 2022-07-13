class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      if(s.size()*g.size() == 0)
          return 0;
        int i, assign = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        for(i = 0; i < s.size() ; i++){
            if(assign < g.size() && g[assign] <= s[i])
                assign++;
        }
        
        return assign;
    }
};
