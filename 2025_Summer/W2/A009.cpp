#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    // 확인해할 조건 1. 문자열의 길이가 4이거나 6인가?
    //             2. 1이 만족하면 문자열의 구성이 숫자로만 되어있는가?
    if(s.size() == 4 || s.size() == 6)
    {
         for(char c : s){
            if(c >= '0' && c <= '9') // 숫자의 범위에 있다면 현재 문자는 OK
                continue;
            return false; //아니라면 숫자가 아닌 문자가 있기에 FALSE
        }
        return true;
    }
    return false; // 1의 조건에 위배 되므로 FALSE
    
}