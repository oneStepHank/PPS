#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        //return : removeDuplicates vector size
        for (size_t j = 1; j < nums.size(); j++){
            if(nums[i]==nums[j])
                continue;
            // i : removed Duplicates vector's idx 
            // j : original vector idx
            // i++ : next idx , 
            // nums[i] != nums[j] -> new_vector[i+1] = original_vector[j]
            i++;
            nums[i] = nums[j];
        }
        return i + 1; // i + 1 => new vector's size
    }
};