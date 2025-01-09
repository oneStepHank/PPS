#include <vector>
using namespace std;

class Solution {
  
public:
    int countPrimes(int n) {
        vector<bool> isPrimes(n + 1,true);
        isPrimes[0] = isPrimes[1] = false ;// 0 , 1 is not prime number

        for(int i = 2; i*i < n ; i++){
            if(isPrimes[i]){
                for(int j = i*i ; j < n ; j+=i){
                    isPrimes[j]=false;
                }
            }
        }
        int res = 0;
        for(int i = 2 ; i<n ; i++){
            if(isPrimes[i]) res++;
        }
        return res;
    
    }
    
};