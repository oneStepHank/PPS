#include <iostream>
using namespace std;

int main(){
    // 두수 비교하기
    int A,B;
    cin >> A >> B;
    if(A>B)
        cout << ">";
    else if(A<B)
        cout << "<";
    else
        cout <<"==";
}