class Solution {
public:
    bool isPerfectSquare(int num) {
        long long lo = 1, hi = (long long)num;
        long long mid;
        while(lo <= hi){
            mid  = (lo+hi)/2;
            long long value = mid * mid;
            if (value == num)
                return true;
            else{
                if(value <= num){
                    lo = mid + 1;
                }else{
                    hi = mid - 1;
                }
            }
        }
        return false;
    }
};

// optimization
// int lo = 1, hi = num / 2; (num >= 4(the leastest sqaure num except for 1) , (num/2)^2 <= num )
// so if num is 1 -> return true; ( 1 is square nums (1*1 = 1))
// int mid;
// while(lo <= hi){
//     mid = (lo + hi) / 2;
//     // mid * mid cause overflows (int type), use long long -> can solve overflow, but abuse memory
//     // mid * mid == num -> num / mid == mid
//     if((double) num / mid == mid){
//         // the reason double -> just use num / mid == mid -> remove the nums under point can cause errors
//         return true;
//     }else{
//         if((double) num / mid > mid){ // current range is small to find mid * mid == num
//             lo = mid + 1;
//         }else
//             hi = mid - 1;
//     }
// }
// return false; -> we can't find mid * mid == nums , this is num isn't square nums