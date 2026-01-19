#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int prize = 0;
    if (d1 == d2 && d1 == d3) { 
        // 세 숫자가 모두 같은 경우
        prize = 10'000 + d1 * 1'000;
    } else if (d1 == d2 || d1 == d3) { 
        // d1이 두 개와 같은 경우
        prize = 1'000 + d1 * 100;
    } else if (d2 == d3) { 
        // d2와 d3이 같은 경우
        prize = 1'000 + d2 * 100;
    } else { 
        // 모두 다른 경우
        prize = max({d1, d2, d3}) * 100;
    }
    cout << prize;
}