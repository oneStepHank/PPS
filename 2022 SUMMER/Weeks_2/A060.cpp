class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>s;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int n=s.size();
                s.push_back(s[n-1]+s[n-2]);
            }
            else if(ops[i]=="C")s.pop_back();
            else if(ops[i]=="D")s.push_back(2*s.back());
            else s.push_back(stoi(ops[i]));
        }
        return accumulate(s.begin(),s.end(),0);
    }
};
