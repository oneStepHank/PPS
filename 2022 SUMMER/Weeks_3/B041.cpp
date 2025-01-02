#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string max = to_string(num);
        for(int i = 0 ; i < max.size() ; i++){
        if(max[i] == '6'){
            max[i] = '9';
            break;
        }
    }
        return stoi(max);
    }
};
