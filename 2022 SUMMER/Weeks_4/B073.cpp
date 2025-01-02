#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    if (n == 0)
        return 0;
     else if(n == 1)
        return 1;
    else if(n== 2)
        return 2;
        
    long long arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        
        for(int i = 3 ; i<= n ; i++)
            arr[i] = arr[i-1]%1234567 + arr[i-2]%1234567;
        
        return arr[n]%1234567;
    
}
