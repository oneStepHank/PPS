#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int C, S;
    cin >> S >> C; // S : 파 개수, C : 파닭 개수
    vector<long long> oions(S);
    long long sum = 0;
    for (int i = 0; i < S; i++)
    {
        cin >> oions[i];
        sum += oions[i];
    }

    // binary search
    long long lo = 1, hi = 1000000000;
    long long optimalLength = 0; // 파 길이의 후보군
    while(lo <= hi){
        long long mid = lo + (hi - lo) / 2;
        long long count = 0; // 파 막대의 개수
        for (int i = 0; i < S; i++)
        {
            count += oions[i] / mid; // 사온 파의 길이보다 mid가 크다면, 해당 막대는 버리게됨, 즉 안쓴다는 것
        }
        if(count < C){ // 만들어야할 파닭의 개수보다, 현재 만들 수 있는 파의 개수가 더 작다면
            hi = mid - 1; // 파 막대 개당의 크기를 줄여야함
        }else{ // count >= C :
            optimalLength = mid; //
            lo = mid + 1;
        }
    }
    long long remains = sum - optimalLength * C;
    cout << remains << endl;
    return 0;
}
