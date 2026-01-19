#include <iostream>
using namespace std;

int main(){
    //알람시계
    int H, M;
    cin >> H >> M;
    if(M<45){
        M = M +60 - 45;
        H--;
    }else
        M = M-45;
    if(H<0)
        H = 23;
    cout << H<< " " << M;
}