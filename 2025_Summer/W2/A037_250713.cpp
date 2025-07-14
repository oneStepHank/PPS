#include <vector>
#include <string>

using namespace std;
class Solution
{
public:
    bool selfDivided(const string& s){ // for huge value(num)
        for(char c : s){
            if(c - '0' ==0)
                return false;
            else if(stoi(s)%(c-'0')!=0)
                return false;
        }
        return true;
    }
    bool selfDivided(int nums){
        int num = nums;
        while(num){
            int digit = num % 10;
            if(digit == 0)
                return false;
            else if(nums%digit != 0)
                return false;
            num /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left ; i<=right; i++){
            // left -> right
            //string s = to_string(i);
            if(selfDivided(i))
                res.push_back(i);
        }
        return res;
    }
};