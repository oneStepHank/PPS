#include <iostream>

using namespace std;

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
