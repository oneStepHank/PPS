#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int N, K;
    cin >> N >> K; 
    // 0~N(1>=1)까지의 정수에 대해서, 정수 K(>=1)개를 선택하여 N를 만족하는 경우의 수 구하기
    
    long long dp[201][201] = {0}; // dp[i][j] : i개의 변수를 이용하여 j를 만족시키는 경우의 수
    // dp[i][j] = Sum(k=0~j) dp[i-1][k] <- i-th 변수를 0~j로 정해서 경우를 나눠보기
    // 이때 Sum(k=0~j-1)dp[i-1][k] = dp[i][j-1]
    // dp[i][j] = dp[i-1][j] + dp[i][j-1]
    long long mod = 1'000'000'000;
    //1-based index
    for (int i = 1; i <= 200; i++)
    {
        dp[i][0] = 1; // i개의 변수로 0를 만드는 경우의 수는 모든 변수가 0인 경우밖에 없음
    }
    for (int j = 1; j <= 200; j++){
        dp[1][j] = 1; // 1개의 변수로 j를 만드는 경우의 수 : 1개
    }
    for (int i = 2; i <= 200; i++){
        for (int j = 1; j <= 200; j++){ //dp[i]
            // (a+b)%m = ((a%m) + (b%m))%m
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1])%mod;
        }
    }

    cout << dp[K][N] ;
    return 0;
}
