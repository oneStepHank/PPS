#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b; // 3자리수 * 3자리수
    int first, second, third, finally;
    finally = a * b;
    first = a * (b % 10);
    second = a * ((b / 10) % 10);
    third = a * (b / 100);
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    cout << finally << endl;
    return 0;
}
