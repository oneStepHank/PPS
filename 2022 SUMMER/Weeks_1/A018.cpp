//A018
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int count;
    int numbers;
    cin >> count;
    vector<int>ary[2];
    
    for(int i = 0 ; i< 2;  i++){
        for(int j = 0 ; j< count ; j++){
            cin >> numbers;
            ary[i].push_back(numbers);
        }
    }
    sort(ary[0].begin(), ary[0].end());
    sort(ary[1].begin(), ary[1].end(), greater<int>());
    
    vector<int>::iterator a_iter, b_iter;
    a_iter = ary[0].begin();
    b_iter = ary[1].begin();
    
    int result = 0;
    while(a_iter != ary[0].end()){
        result += (*a_iter) * (*b_iter);
        a_iter ++;
        b_iter ++;
    }
    cout << result;
    return 0;
}

