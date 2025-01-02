//A030
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0, i=0, n=nums.size();
        while(i<n) {
            nums[cnt] = nums[i];
            while(i<n && nums[cnt]==nums[i]) i++;
            cnt++;
        }
        return cnt;
    }
};
