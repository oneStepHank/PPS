#include <string>
#include <vector>
#include <algorithm> // sort, pair
using namespace std;

bool sorting(pair<double,int> f, pair<double,int> b){
    if(f.first == b.first)
        return f.second < b.second;
    return f.first > b.first;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double,int>> failRate; // first : failRate, second : original_index
    vector<int> yetClear(N,0); // 해당 스테이지에서 아직 클리어 하지 못한 수
    vector<int> players(N,0); // index+1에 해당하는 스테이지에 도달한 player의 수
    
    for(int v : stages){
        int currentStage = v<N+1? v-1 : N-1;
        for(int i = 0 ; i<=currentStage; i++){
            players[i]++;
        }
        // v == N+1? clear all stages
        if(v==N+1)
            continue;
        yetClear[currentStage]++;
    }
    
    for(int i = 0 ; i< N; i++){
        // 실패율 = 아직 클리어하지 못한 플레이어 수 / 해당 스테이지를 도달했던 총 플레이어 수
        // 단 스테이지를 도달한 플레이어가 없다면 -> 실패율은 0으로 정의
        pair<double,int> rate_index;
        rate_index.first = !players[i]? 0 : (double)yetClear[i]/players[i];
        rate_index.second = i+1;
        failRate.push_back(rate_index);
    }
    sort(failRate.begin(),failRate.end(),sorting);
    for(auto x : failRate){
        answer.push_back(x.second);
    }
    return answer;
}