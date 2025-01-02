#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    map<char , int> player;
    
    for(int i = 0 ; i< n ; i++){
        string temp;
        cin >> temp;
        player[temp[0]]++;
    }
    
    vector<char> choose;
    
    for(auto x: player){
        if(x.second >= 5)
            choose.push_back(x.first);
    }
    if(choose.size() == 0)
        printf("PREDAJA");
    else
        for(int i = 0 ; i< choose.size(); i++)
            cout << choose[i];
    return 0;
}
