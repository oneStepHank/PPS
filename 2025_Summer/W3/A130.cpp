#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;
    
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        if(tmp != 0)
            s.push(tmp);
        else
            s.pop();
    }
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}