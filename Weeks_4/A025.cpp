#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 0)
            return false;
        for(int x = 0 ; x < 16 ; x++){
            if(n == pow(4, x))
                return true;
        }
        return false;
    }
};
