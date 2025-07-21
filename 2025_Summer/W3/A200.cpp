#include <iostream>

using namespace std;
bool wins[1001] = {
    false,
};

int main() {
    int N; cin >> N;

    // 기본값
    wins[1] = false;  // 1개 남으면 즉시 패배
    wins[2] = true;   // 2개 남으면 1개만 빼서 승
    wins[3] = false;  // 3개 남으면 어떤 수를 둬도 패

    for (int i = 4; i <= N; ++i)
        wins[i] = (!wins[i-1]) || (!wins[i-3]);

    cout << (wins[N] ? "SK" : "CY");
    return 0;
}