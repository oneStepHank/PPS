//A015
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int temp, result = 0;
    for(int i = 0 ; i < 5; i++){
        cin >> temp;
        result += temp*temp;
    }
    result %= 10;
    cout << result;
    return 0;
}
