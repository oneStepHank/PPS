// binary search -> sqrt
class Solution {
public:
    int mySqrt(int x) {
        long long lo = 1, hi = x;
        long long res;
        while(lo <= hi){
            long long mid = (lo+hi)/2;
            long long cmp = (long long)mid * (long long)mid;
            if(cmp > x){
                hi = mid - 1;
                continue;
            }else if(cmp < x){
                lo = mid + 1;
                res = lo - 1;
            }else{
                res = mid;
                break;
            }
        }
        return res;
    }
};