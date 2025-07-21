#include <iostream>
#include <vector>
using namespace std;
int dp[11] = {
    0,
};
int main()
{
    int n;
    cin >> n;
    
    // initialize
    dp[1] = 1;
    dp[2] = 2; 
    dp[3] = 4; 
    
    for (int i = 4; i < 11; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        res.push_back(dp[tmp]);
    }
    for(int var : res)
    {
        cout << var << '\n';
    }
}