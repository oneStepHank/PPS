#include <iostream>
/*
세준이는 크기가 N×N인 배열 A를 만들었다. 배열에 들어있는 수 A[i][j] = i×j 이다. 
이 수를 일차원 배열 B에 넣으면 B의 크기는 N×N이 된다. B를 오름차순 정렬했을 때, B[k]를 구해보자.

배열 A와 B의 인덱스는 1부터 시작한다.
*/
using namespace std;
typedef long long LL;
int n, k;

LL countLessOrEqual(LL mid){
    LL count = 0;
    for (int i = 1; i <= n; i++){
        count += min((LL)mid / i, (LL)n);
    }
    return count;
}

int main()
{
    cin >> n >> k;
    LL lo = 1, hi = (LL)n * n;
    LL answer;
    while (lo <= hi)
    {
        LL mid = (lo + hi) / 2;
        if(countLessOrEqual(mid) < k){
            // 현재 단계의 경계에서 mid라는 비교값보다 작은 원소의 개수가 K보다 작다면
            // 비교하는 mid 값을 증가시켜야 함으로 lo값을 업데이트
            lo = mid + 1;
        }
        else
        {
            //K보다 크거나 같다면, mid 값을 낮춰야 함으로 -> hi를 낮추자
            answer = mid; // answer는 K번째 값일 수 도 있는 Mid 값들을 업데이트 해주는 역할 
            hi = mid - 1;
        }
    }
    cout << answer;
}
