#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int>& nums, int target) {
        int lo = 0 , hi = nums.size() - 1;
        while(lo <= hi){
            // hi-lo : the legth of boundary
            // lo : the start index of boundary
            // lo + (hi-lo)/2 -> middle index in current boundary
            int mid = lo + (hi - lo) / 2; // calculate middle index in current boundary
            if(nums[mid] < target){
                lo = mid + 1;
            }else if( nums[mid] > target){
                hi = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};