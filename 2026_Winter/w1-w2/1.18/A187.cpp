#include <iostream>
using namespace std;
int main(){
    /*
    연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
    윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
    */
    int year;
    cin >> year;
    if(year%4 == 0){
        if(year%100==0){
            if(year%400==0)
                cout << "1";
            else
                cout << "0";
        }
        else
            cout << "1";
    }else
        cout << "0";
    return 0;
}