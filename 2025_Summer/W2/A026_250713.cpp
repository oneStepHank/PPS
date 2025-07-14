#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    // 자리수 가져오기 위한 string으로 변환
    string s = to_string(x);
    int harshad = 0;
    for(char c : s){
        harshad += (c - '0');
    }
    
    return !(x%harshad);
}