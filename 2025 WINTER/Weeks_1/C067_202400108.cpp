#include <iostream>
#include <vector>

using namespace std;
/*
블랙잭 문제 : N(<=100)개의 카드중에서 M를 넘지 않는 최대 수가 무엇인가?
*/

int main(){
    int N, M;
    cin >> N >> M;
    //제한 시간 1초,
    // 사실 최대 경우의 수 : 10C3, 해당 데이터 처리에 10^9보다 작은 값임 1초안에 해결 될 것으로 보임

    vector<int> cards(N);
    for (int i = 0; i < N; i++){
        cin >> cards[i];
    }

    int avail_max = 0;
    bool numIsMax = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++){
            for (int k = j + 1; k < N; k++){
                int sum = cards[i] + cards[j] + cards[k];
                if(sum > M)
                    continue;
                else{
                    if(sum >= avail_max)
                        avail_max = sum;
                    else if (sum == M){
                        avail_max = M;
                        numIsMax = true;
                    }
                }
            }
        }
        if(numIsMax)
            break;
    }
        cout << avail_max;
}
