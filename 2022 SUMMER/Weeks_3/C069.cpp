#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> wait;
    vector<int> sum;
    
    for(int i = 0 ; i< n ; i++){
        int temp;
        cin >> temp;
        wait.push_back(temp);
    }
    sort(wait.begin(), wait.end());
    
    sum.push_back(wait[0]);
    
    for(int i = 1 ; i < n ; i++){
        sum.push_back(sum.back() + wait[i]);
    }
    int result = 0;
    for(int i = 0  ; i < n ; i++)
        result += sum[i];
    cout << result;
    return 0;
}
