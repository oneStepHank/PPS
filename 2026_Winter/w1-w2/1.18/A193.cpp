#include <iostream>
using namespace std;

int main(){
    int bytes;
    cin >> bytes;
    string ans = "";
    for (int i = 0; i < bytes / 4; i++){
        ans += "long ";
    }
    cout << ans + "int";
}