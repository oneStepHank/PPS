#include <vector>
using namespace std;
// Pascal's triangle -> nCr = n-1Cr-1 + n-1Cr
// Combination's symmetry
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back(vector<int>(1,1));
        if(numRows ==1)
            return res;
        for(int i = 1 ; i< numRows; i++){
            vector<int> rows(i+1); // i-th row has i+1 items.
            rows[0]=rows[i]=1;
            for(int j = 1 ; j < i/2 + 1; j++){
                rows[j]=rows[i-j] = res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(rows);
        }
        return res;
    }
};