#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]+=1;
        if(digits[digits.size()-1]< 10){
            return digits;
        }
        //자릿수가 올라갔기에 -> 현재 자리수는 0으로, cry=1로 선언(자릿수가 올라갔다)
        digits[digits.size()-1] = 0;
        int cry = 1; 

        
        for(int i = digits.size() - 2 ; i >= 0 ; i--){
            if(cry){
                // cry is 1 -> 자릿수가 올라갈 경우가 존재
                if(digits[i] + cry == 10){
                    cry = 1;
                    digits[i]=0;
                    continue;
                }
            }
            // cry + 현재 자리의 수 < 10 : 더이상 자릿수의 변경이 없음으로 cry = 0 , digites[0]
            // 더이상 순회할 필요 X 
            digits[i]+= 1;
            cry = 0;
            break;
        }
        //최종적으로 cry = 1 , digits[0] -> 10^n 자릿수가 10^(n+1)자랏수도 변경되었다는 것
        if(cry && digits[0] == 0){
            vector<int> res;
            res.push_back(1);
            for(auto v : digits){
                res.push_back(v);
            }
            return res;
        }
        return digits;
    }
};