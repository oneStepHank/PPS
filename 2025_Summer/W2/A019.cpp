#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 
0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/

int main(int argc, const char** argv) {
    vector<int> nums(3);
    int res = 1;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
        res *= nums[i];
    }
    string s = to_string(res);
    vector<int> ans(10, 0); // 0 - 9까지의 수(idx)의 빈도수(0으로 초기화)
    for(char c : s){
        ans[(c - '0')] += 1;
    }
    for(int i : ans){
        cout << i << "\n";
    }
}