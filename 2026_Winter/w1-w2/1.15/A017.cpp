#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/*
다솜이는 은진이의 옆집에 새로 이사왔다.
다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.

다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다.
한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다.
다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최솟값을 출력하시오.
(6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)
*/

// 방번호 N (<= 1,000,000 이하의 자연수 )
int main(){
    // 각 자리의 숫자들이 몇번나오는지를 알아야한다
    // **6,9는 뒤집어서 사용할 수 있다**
    string N;
    cin >> N;
    vector<int> count(10, 0); // 0~9가 몇번나오는지 저장
    for (char c : N)
    {
        int idx = c - '0';
        count[idx]++;
    }
    // 6,9는 뒤집어서 사용할 수 있다 -> ceil(count[6]+count[9] / 2); 만큼 필요
    // 남은 번호에 대해서는 추가적인 조작이 필요 없음
    count[6] = count[9] = ceil((count[6] + count[9]) / 2.0);
    int ans = 0;

    for(int i : count){
        ans = ans <= i ? i : ans;
    }
    cout << ans;
}