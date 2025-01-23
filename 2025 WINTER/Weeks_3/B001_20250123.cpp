#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M; // N개의 노드 , M개의 순서쌍
    vector<vector<int>> graph(N); //0-based arr
    vector<bool> visited(N, false);
    visited[0] = true; // 1을 기준으로 연결된 노드 true,false 판단
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        // non-directed graph
        graph[u - 1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }
    //BFS
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int current = q.front();
        q.pop();
        for(int neighbor : graph[current]){
            if(!visited[neighbor]) // 현재노드와 연결된 node들에 대해서 방문하지 않았다면
            {
                visited[neighbor] = true;
                // queue 다음 순번 추가
                q.push(neighbor);
            }
            // 만일 방문했던(연결되어있음을 확인한) node에 대해서 확인 불필요
        }
    }
    int ans = 0;
    for (size_t i = 1; i < N; i++)
    {
        if(visited[i])
            ans++;
    }

    cout << ans;
}
