#include<vector>
#include<iostream>
#include <queue>
#include<algorithm>
using namespace std;

vector<int> BFS;
vector<int> DFS;

void bfs(int pos, vector<vector<int>> &g, vector<bool>& visited){
    queue<int> q;
    q.push(pos-1);
    visited[pos - 1] = true;
    BFS.push_back(pos);

    while(!q.empty()){
        int current = q.front();
        q.pop();
        for(int neighbor : g[current]){ // 현재 노드들과 연결된 노드들에 대해서
            if(!visited[neighbor]){ // 방문하지 않았더라면
                visited[neighbor] = true; // 방문 표시
                q.push(neighbor); // 현재 방문한 노드를 기준으로 확인할 수 있도록 큐에 삽입
                BFS.push_back(neighbor+1);
            }
        }
    }
}

void dfs(int pos, vector<vector<int>>& g, vector<bool>& v){
    // 1-based idx 
    v[pos-1] = true;
    DFS.push_back(pos);
    for (auto next : g[pos-1])
    {
        if(!v[next])
            dfs(next+1, g, v);
    }
}
int main(int argc, char const *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N, M, start;
    cin >> N >> M >> start;
    vector<vector<int>> graph(N);
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        // undirected graph
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }
    // 노드번호가 작은 순부터 방문 -> 정렬
    for (size_t i = 0; i < N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    //DFS
    vector<bool> dfs_v(N, false);
    dfs(start, graph, dfs_v);
    for(auto v : DFS){
        cout << v << " ";
    }
    cout << "\n";
    // BFS
    vector<bool> bfs_v(N, false);
    bfs(start, graph, bfs_v);
    for(auto v : BFS){
        cout << v << " ";
    }

    return 0;
}
