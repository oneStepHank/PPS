#include<vector>
class Solution {
    //XOR 연산 : 서로 다른 값일 때 1을 반환
    // a XOR 0 = a 
    // a XOR a = 0
public:
    int singleNumber(std::vector<int>& nums) {
        int singleNums = 0;
        for(int num : nums){
            singleNums ^= num;
        }
        return singleNums;
    }
};