//A021
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int count;
    int temp , result = 0;
    cin >> count;
    
    for(int i = 0 ; i < count ; i++){
        cin >> temp;
        result += temp;
        result -= 1;
    }
    
    result++;
    if(count == 0)
        result = 0;
    
    cout << result;
    return 0;
}

