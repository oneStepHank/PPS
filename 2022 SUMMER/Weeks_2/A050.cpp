#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    for(int i = 0 ; i< s.size() ; i++){
        s[i] = s[i] -3;
        if(s[i] < 65)
            s[i] += 26;
        cout << s[i];
    }
    return 0;
}
