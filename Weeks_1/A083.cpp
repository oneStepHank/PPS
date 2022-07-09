//A083
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(){
    int n ;
    cin >> n;
    vector<int>num;
    int temp;
    
    for(int i = 0 ; i< n ; i++){
        cin >> temp;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    
    num.erase(unique(num.begin(), num.end()),num.end());
    for(int i = 0 ; i< num.size(); i++){
        cout << num[i] << " ";
    }
    return 0;
}

