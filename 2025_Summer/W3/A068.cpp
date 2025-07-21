#include <iostream>
#include <queue>
#include <string>
using namespace std;


/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

int cmd(const string& s, queue<int>& q) {
    if (s == "push") {
        int x; cin >> x;
        q.push(x);
        return -2;               // 출력 안 함
    }

    if (s == "pop") {
        if (q.empty()) return -1;
        int x = q.front(); q.pop();
        return x;
    }

    if (s == "size")   return q.size();
    if (s == "empty")  return q.empty() ? 1 : 0;
    if (s == "front")  return q.empty() ? -1 : q.front();
    if (s == "back")   return q.empty() ? -1 : q.back();

    return -2;                   // safety
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    queue<int> q;
    vector<int> res;
    for (int i = 0; i < N; i++)
    {
        string command;
        cin >> command;
        int val = cmd(command, q);
        if(val != -2)
            res.push_back(val);
    }

    for(auto v : res){
        cout << v <<'\n';
    }
}