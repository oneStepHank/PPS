#include <iostream>

using namespace std;
/*
검증수는 고유번호의 처음 5자리에 들어가는 5개의 숫자를 각각 제곱한 수의 합을 10으로 나눈 나머지이다.
*/
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int res = 0;
    for(int i = 0 ; i<5; i++){
        int n;
        cin >> n;
        if(!n)
            continue;
        res += (n * n);
    }
    res = res % 10;
    cout << res;
}