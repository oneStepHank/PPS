#include<vector>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 ,d10;
        int remain = 0;
        for(auto v : bills){
            remain = 5 * d5 + 10 * d10; // if I have $20, cant privde $20
            if(remain < v - 5)
                return false; // we cant privde change
            else{ // remain >= v - 5;
                if(v == 5)
                    d5++;
                else if(v == 10){
                    d5--;
                    if(d5 < 0)
                        return false;
                    d10++;
                }else{ // $20 given
                    if(!d5)
                        return false; // at least, have to give one-$5
                    else if(d10>0){
                        d10--;
                        d5--;
                    }else{
                        d5 -= 3;
                    }
                }
            }
        }
        return true;
    }
};