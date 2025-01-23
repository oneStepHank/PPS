#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMaxSumInSubsequecne(vector<int>& nums){
    vector<int> dp = nums; // nums의 각 원소를 부분수열로 간주
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if(nums[i]>nums[j]){
                // dp[i] 값이, 현재의 값보다, 새로운 원소를 추가했을 때 더 크다면 dp[i] update
                // dp[j] + nums[i] => dp[j] 값에 새로운 i-th index 값을 추가한 값
                dp[i] = max(dp[i], dp[j]+nums[i]);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    cout << findMaxSumInSubsequecne(nums);
    return 0;
}
