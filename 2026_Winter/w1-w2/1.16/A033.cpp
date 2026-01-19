#include <iostream>
using namespace std;

int main(){
    int idx =-1 , ans = 0;
    for(int i = 0 ; i<5 ; i++){
        int sum = 0;
        int score;
        for(int j = 0 ; j<4 ; j++){
            cin >> score;
            sum += score;
        }
        if(sum > ans){
            ans = sum;
            idx = i+1;
        }
    }
    cout << idx << "\n" << ans;
}