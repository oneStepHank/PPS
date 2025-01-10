#include <iostream>

using namespace std;
/*
또다른 풀이 O(1) : Modular arithmetic , Digital root
     10 ≡ 1 (mod 9) means 10 - 1 = k * 9
     10^n ≡ 1^n (mod 9) => a * 10^n ≡ a (mod 9) 정수배의 성질
     a1 ≡ b1 (mod n) , a2 ≡ b2 (mod n) , if a ≡ b (mod n)
     => a + a1 ≡ b + b1 (mod n)
     N = a + b * 10 + c * 100

     dr(N) = dr(a+b+c) ....
     N ≡ N(mod 9) , N = a + b * 10 + c * 100
     a + b * 10 + c * 100 ≡ a + b + c (mod 9)
     N mod 9 = a + b + c
     dr(N)= 
            0 : N = 0
            N % 9 : N이 9의 배수가 아닐때
            9 : N = k * 9 (k >= 1)

     dr(N) = (N-1) mod 9 + 1
*/
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    long long res = 0;
    while (1)
    {
        while(num){
            
            res += num % 10;
            cout << res << " : " << num << endl;
            num /= 10;
        }
        if(res >= 10)
            {
                num = res;
                res = 0;
            }
        else
            break;
    }

    return 0;
}
