#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n , &k);
    
    vector<int> a;
    for(int i = 0 ; i< n; i++){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    
    cout << a[k-1];
}
