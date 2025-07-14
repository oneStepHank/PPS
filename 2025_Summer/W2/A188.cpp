#include <iostream>
using namespace std;

int main(){
    // 사분면 결정
    int x, y;
    cin >> x >> y;
    
    if(x>0){
        if(y>0)
            cout << "1";
        else
            cout << "4";
    }else{ // x<0
        if (y > 0)
            cout << "2";
        else
            cout << "3";
    }
}