#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end(), greater<>());
    cout << s;
    
    return 0;
}
