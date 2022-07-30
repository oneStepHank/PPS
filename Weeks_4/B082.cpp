#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0)
            return 0;
        else if(n == 1)
            return 1;
        else if(n== 2)
            return 2;
        
        int arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        
        for(int i = 3 ; i<= n ; i++)
            arr[i] = arr[i-1] + arr[i-2];
        
        return arr[n];
    }
};
