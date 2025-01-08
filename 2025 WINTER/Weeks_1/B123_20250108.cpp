/*
1742년, 독일의 아마추어 수학가 크리스티안 골드바흐는 레온하르트 오일러에게 다음과 같은 추측을 제안하는 편지를 보냈다.

4보다 큰 모든 짝수는 두 홀수 소수의 합으로 나타낼 수 있다.
예를 들어 8은 3 + 5로 나타낼 수 있고, 3과 5는 모두 홀수인 소수이다. 
또, 20 = 3 + 17 = 7 + 13, 42 = 5 + 37 = 11 + 31 = 13 + 29 = 19 + 23 이다.

이 추측은 아직도 해결되지 않은 문제이다.

백만 이하의 모든 짝수에 대해서, 이 추측을 검증하는 프로그램을 작성하시오.
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

// 소수 판별 -> 에라토스테네스의 체 (Sieve of Eratosthenes)
// 최종적으로 남은 true 값들이 소수다
// 소수의 배수들은 소수가 아니므로, N가지의 원소들이 우선 소수라고 가정하고 지워가는 방식
const int MAX = 1000001;
vector<bool> isPrime(MAX+1, true);

void seive(){
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < sqrt(MAX); i++)
    {
        if(isPrime[i]){
            for (int j = i * i; j <= MAX; j+=i){
                isPrime[j] = false;
            }
        }
    }
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    seive();
    int N;
    vector<string> res;
    while (cin >> N)
    {
        if(N==0)
            break;
        string s = "Goldbach's conjecture is wrong.";
        for (int i = 3; i <= N / 2 && N-i <= MAX; i++)
        {
            bool stop = false;
            if (isPrime[i] && isPrime[N-i])
            {
                s = to_string(N) + " = " + to_string(i) + " + " + to_string(N-i);
                break;
            }
        
        }
        res.push_back(s);
        }
    for(auto v : res){
        cout << v << "\n";
    }    

}
    
// int main(){
//     cin.tie(0);
//     cout.tie(0);
//     ios::sync_with_stdio(false);

//     int N;
//     vector<string> res;
//     vector<int> primes = {3};
//     while (cin >> N && N != 0)
//     {
//         // make vector(primes) : set of prime numbers which is less than N
//         for (int i = *(primes.end()-1)+2; i <= N/2; i+=2){
//             // cout << " ---- " << i << " ----- \n";
//             // 벡터의 마지막 원소(현재 가장 큰 소수) 부터 시작하여 N보다 작은수에 대하여
//             int LIMIT = sqrt(i);
//             bool isPrime = true;
//             for (int j = 2; j <= LIMIT; j++)
//             {
//                 if (i%j==0){
//                     isPrime = false;
//                     break;
//                 }
//             }
//             if(isPrime)
//                 primes.push_back(i);
//         }
//         // find pair(a,b) which is satisfied N = a + b.
//         pair<int, int> pair_ab;
//         vector<pair<int, int>> satisfiedPair;
//         for (int i = 0; i < primes.size(); i++)
//         {
//             if (primes[i] >= N)
//                 break;
//             int canStop = false;
//             for (int j = i; primes[j] < N && j < primes.size(); j++)
//             {

//                 if(primes[i]+primes[j] == N){
//                     canStop = true;
//                     pair_ab = make_pair(primes[i], primes[j]);
//                     break;
//                 }
//             }
//             if(canStop)
//                 break;
//         }
//         // cout << pair_ab.first << " : " << pair_ab.second << endl;
//         if(pair_ab.first == 0){
//             //만족하는 순서쌍이 없다면
//             res.push_back("Goldbach's conjecture is wrong.");
//         }else{
//             //존재한다면
//             res.push_back(to_string(N)+" = "+to_string(pair_ab.first)+" + "+to_string(pair_ab.second));
//         }
//     }
//     for(auto v : res){
//         cout << v << "\n";
//     }
// }