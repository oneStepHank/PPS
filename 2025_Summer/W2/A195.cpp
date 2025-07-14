#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string result = "";
    for (int i = 1; i <= N; i++) {
        result += string(i, '*') + '\n'; // 한 줄에 별 i개 추가
    }

    cout << result; // 모든 결과를 한 번에 출력
    return 0;
}