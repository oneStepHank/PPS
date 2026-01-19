#include <iostream>
using namespace std;

int main(){
    //90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F
    int score;
    cin >> score;
    if(score >= 90)
        cout << "A";
    else if(score >=80)
        cout <<"B";
    else if(score >= 70)
        cout << "C";
    else if(score>=60)
        cout << "D";
    else
        cout << "F";
}