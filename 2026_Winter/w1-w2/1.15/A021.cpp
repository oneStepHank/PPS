#include <iostream>

using namespace std;
// N개의 멀티탭(N<=500,00) 멀티탭이 몇 구인지 입력을 받는다
// 최대로 전원을 연결할 수 있는 값?!
// 멀티탭이 서로 연결되어 전원을 공급해줘야함
// N번째를 제외한 모든 멀티탭에 대해서는 한자리는 다른 멀티탭을 연결하는 자리
// N-1 개의 멀티탭 자리에 대해서는 다른 멀티탭을 연결하는 것!
int main(){
    int N;
    int connect_N = 0;
    cin >> N;
    int res = 0;
    for(int i = 0 ; i<N; i++){
        int tmp;
        cin >> tmp;
        res += tmp;
    }
    int ans = res - (N-1);
    cout << ans;
}