#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(){
    int s, f;
    cin >> s >> f;
    
    int ans = abs(f - s); // finish - start

    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        tmp = tmp >= f ? tmp - f + 1 : f - tmp + 1;
        ans = ans >= tmp ? tmp : ans;
    }
    cout << ans;
}