//A033
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int score[5][5];
    int sum[5] = {0}, index = 0;
    
    for(int i = 0 ; i < 5; i ++){
        for(int j = 0 ; j< 4; j++){
            cin >> score[i][j];
            sum[i] += score[i][j];
        }
    }
    for(int i = 0 ; i< 5 ; i++){
        index = sum[index] < sum[i]? i : index;
    }
    cout << index+1 << " " << sum[index];
    return 0;
}

