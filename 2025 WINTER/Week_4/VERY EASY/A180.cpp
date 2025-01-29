#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // % 연산의 성질
    int a, b, c;
    cin >> a >> b >> c;
    
    //(A+B)%C = ((A%C)+(B%C))C?
    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;

    //(A×B)%C = ((A%C) × (B%C))%C ?
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;
    return 0;
}
