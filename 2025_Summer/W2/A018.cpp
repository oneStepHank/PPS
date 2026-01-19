#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* <문제>
옛날 옛적에 수학이 항상 큰 골칫거리였던 나라가 있었다. 이 나라의 국왕 김지민은 다음과 같은 문제를 내고 큰 상금을 걸었다.

길이가 N인 정수 배열 A와 B가 있다. 다음과 같이 함수 S를 정의하자.

S = A[0] × B[0] + ... + A[N-1] × B[N-1]

S의 값을 가장 작게 만들기 위해 A의 수를 재배열하자. 단, B에 있는 수는 재배열하면 안 된다.

S의 최솟값을 출력하는 프로그램을 작성하시오.
*/
bool descending(int f, int b){
    if(f > b)
        return true;
    return false;
}
/* <sort에서의 비교함수>
sort에서의 비교함수는 값이 같을 때 FALSE를 반환해야한다!
std::sort 다음의 규칙을 따라야한다 -  Strict Weak Ordering (엄격 약순서)
     1. 비반사성(antisymmetric):  comp(a,b) = True -> comp(b,a) = False (a!=b)
     2. 추이성(transitivity):    comp(a,b) = True and comp(b,c) = True -> comp(a,c) = True
     3. 비대칭성(irreflexive):   comp(a,a) = False
     4. Transitivity of Equivalence : comp(a,b) = False ^ comp(b,a) = False -> comp(a,c) = comp(b,c)
           => details  : 순서가 같다면(비교 결과가 동일했을 때), 두 값은 다른 값과의 비교에서도 동일하게 나와야한다

만일 값이 같을 때 TRUE를 반환한다면?! => CHATGPT의 답변
1.	무한 재귀 호출 문제
정렬 알고리즘이 특정 값에 대해 끝없이 비교를 반복할 수 있습니다.
	2.	정렬 결과가 정의되지 않음
같은 값이 a < b와 b < a로 동시에 비교될 경우, 정렬 결과가 예측 불가능하게 됩니다.
	3.	표준 라이브러리와의 비호환성
std::sort는 내부적으로 효율적인 정렬을 위해 특정 알고리즘(예: QuickSort, HeapSort)을 사용하며, 
엄격한 약순서를 가정합니다. 이 조건이 깨지면 정렬 알고리즘의 동작이 비정상적일 수 있습니다.
*/
int main(){
    int N; // N <= 50
    cin >> N;
    vector<int> A;
    vector<int> B;
    // INPUT
    int input;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        A.push_back(input);
    }
    for (int i = 0; i < N; i++){
        cin >> input;
        B.push_back(input);
    }
    //정렬
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(),descending);
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += (A[i] * B[i]);
    }
    cout << ans;
}