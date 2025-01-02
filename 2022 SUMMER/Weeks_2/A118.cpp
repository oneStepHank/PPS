class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        
        if(nums.size() == 1 || nums.size() == 0)
            return;
        
        vector<int> res;
        int count = 0;
        
        for(int i = 0 ; i< length; i++){
            if(nums[i] != 0)
                res.push_back(nums[i]);
            else
                count++;
        }
        for(int i = 0 ; i< count ; i++){
            res.push_back(0);
        }
        
        for(int i = 0 ; i < nums.size() ; i++){
            nums[i] = res[i];
        }
    }
};
