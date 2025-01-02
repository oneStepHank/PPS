#include <iostream>
#include <algorithm> // reverse
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int lenA = a.size();
    int lenB = b.size();

    if (lenB > lenA) {
        swap(a, b);
        swap(lenA, lenB);
    }

    // 02. 자릿수 다르면 맞춰주기
    // ex) 1234, 0032
    string tmp = "";
    if (lenA != lenB){
        for (int i=0; i<(lenA-lenB); i++)
            tmp += "0";
    }
    b = tmp+b;

    string ans = "";
    int carry = 0; // 올림
    int x, y, digit; // 자리수
    for (int i=lenA-1; i>=0; i--){
        x = a[i] - '0';
        y = b[i] - '0';
        digit = x + y;
        if (carry == 1) {
            digit++;
            carry = 0;
        }
        if (digit > 9) // 반올림하는 경우
            carry = 1;
        ans += digit%10 + '0'; // to_string 사용 X
    }

    if (carry == 1)
        ans += "1";



    for (int i=ans.size() - 1; i>=0; i--){
        cout << ans[i];
    }
    return 0;
}

