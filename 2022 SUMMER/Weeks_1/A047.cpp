//A047
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    
    for(int i = 0 ; i < str.length(); i++){
        if(i != 0 && (i%10 == 0))
            cout << "\n";
        cout << str[i];
    }
    
    return 0;
}

