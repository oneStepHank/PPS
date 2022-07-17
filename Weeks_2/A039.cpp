#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> sum;
    
    for(int i = 0; i < n ; i++){
        int temp = 2015;
        string t;
        cin >> t;
        sort(t.begin(), t.end());
        t.erase(unique(t.begin(), t.end()), t.end());
        for(int j = 0 ; j < t.size() ; j++){
            temp -= t[j];
        }
        sum.push_back(temp);
    }
    
    for(int i = 0 ; i< sum.size(); i++){
        cout << sum[i] << "\n";
    }
    return 0;
}
