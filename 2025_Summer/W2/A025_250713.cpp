class Solution {
public:
    bool isPowerOfFour(int n) {
        // n<= 0 -> n is never power of four.
        if(n>0){
            // n > 0 , n is power of four -> n is power of two
            // n -> (1, 10, 100 , 1000, 1000 ...)
            // n & n - 1 == 0
            // if n is power of four , 001, 100, 10000 ....
            // [0],[2],[4] : 1 , other bits is 0
            // bit mask : 0x5555555 (even bits is 1 , odd bits is 0)
            return ((n&(n-1))==0) && ((n & 0x55555555) != 0);
        }
        return false;
    }
};