//A034
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int num;
    vector<int>count;
    
    for(int i = 0 ; i< 10 ; i++){
        cin >> num;
        count.push_back(num%42);
    }
    sort(count.begin(), count.end());
    count.erase(unique(count.begin(),count.end()), count.end());
    cout << count.size();
    return 0;
}

