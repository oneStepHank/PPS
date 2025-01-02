//A081
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int count;
    int numbers;
    cin >> count;
    
    vector<int> ary[count];
    for(int i = 0 ; i< count ; i++){
        for(int j = 0 ; j< 10 ; j++){
            cin >> numbers;
            ary[i].push_back(numbers);
        }
        sort(ary[i].begin(), ary[i].end());
    }
    
    for(int i = 0 ; i < count ;i++){
        cout << ary[i][7] << "\n";
    }
    return 0;
}

