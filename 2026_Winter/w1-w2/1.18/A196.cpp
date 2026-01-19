#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int> m;
    int n;
    cin >> n;
    for(int i = 0; i <n;i++)
    { // cin -> key, map[key]+=1;
        int k;
        cin >> k;
        m[k]++;
    }
    int finds;
    cin >> finds;
    cout << m[finds];
}