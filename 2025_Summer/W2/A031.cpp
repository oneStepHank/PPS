#include <iostream>
using namespace std;

/*
백준 초콜릿 자르기 문제 : NxM의 초콜릿을 1x1로 자르는 최소 횟수?
단 초콜릿을 포개서 자를 수는 없다
*/

int main(){
    int N, M;
    cin >> N >> M;
    // NxM의 조각을 가로기준으로 다 다른다 (N-1)회
    // N개의 가로줄에 대해서 M-1 씩 자르면 1x1의 조각이 나온다
    cout << N - 1 + N * (M - 1) << endl;
}