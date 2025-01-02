#include <iostream>
#include <algorithm> // reverse
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    cin >> str;
    int sum = 0;
    
    for(int i = 0 ; i < str.size() ; i++){
        if( str[i] >= 'A' && str[i] <= 'C')
            sum += 2;
        else if( str[i] >= 'D' && str[i] <= 'F')
            sum += 3;
        else if( str[i] >= 'G' && str[i] <= 'I')
            sum += 4;
        else if( str[i] >= 'J' && str[i] <= 'L')
            sum += 5;
        else if( str[i] >= 'M' && str[i] <= 'O')
            sum += 6;
        else if( str[i] >= 'P' && str[i] <= 'S')
            sum += 7;
        else if( str[i] >= 'T' && str[i] <= 'V')
            sum += 8;
        else
            sum += 9;
    }
    sum += str.size();
    cout << sum;
    return 0;
}
