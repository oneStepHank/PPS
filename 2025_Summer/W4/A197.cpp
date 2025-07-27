#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> balls;
    for (int i = 0; i < n; i++)
    {
        balls.push_back(i + 1);
    }

    for (int i = 0; i < m; i++)
    {
        int f, l;
        cin >> f >> l;
        swap(balls[f - 1], balls[l - 1]);
    }

    for(auto var : balls)
    {
        cout << var << " ";
    }
}