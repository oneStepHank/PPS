#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if(n%10 != 0){
        cout << -1;
    }
    else
    {
        int temp;
        temp = n/300;
        cout <<temp;
        temp = n%300;
        temp = temp/60;
        cout << " " << temp;
        
        temp = n%60;
        temp = temp/10;
        cout << " " << temp;
    }
    return 0;
}
