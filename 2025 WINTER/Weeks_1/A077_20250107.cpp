#include <iostream>
#include <vector>
#include <algorithm>
/*
상근이는 퀴즈쇼의 PD이다. 이 퀴즈쇼의 참가자는 총 8개 문제를 푼다. 
참가자는 각 문제를 풀고, 그 문제를 풀었을 때 얻는 점수는 문제를 풀기 시작한 시간부터 경과한 시간과 난이도로 결정한다. 
문제를 풀지 못한 경우에는 0점을 받는다. 참가자의 총 점수는 가장 높은 점수 5개의 합이다. 

상근이는 잠시 여자친구와 전화 통화를 하느라 참가자의 점수를 계산하지 않고 있었다. 
참가자의 8개 문제 점수가 주어졌을 때, 총 점수를 구하는 프로그램을 작성하시오
*/

/*
첫째 줄에 참가자의 총점을 출력한다. 
둘째 줄에는 어떤 문제가 최종 점수에 포함되는지를 공백으로 구분하여 출력한다. 출력은 문제 번호가 증가하는 순서이어야 한다.
*/

using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b){
    if(a.first > b.first)
        return true;
    else
        return false;
}
int main()
{
    vector<pair<int, int>> score(8);
    for (int i = 0; i < 8; i++){
        cin >> score[i].first;
        score[i].second = i + 1;
    }
    vector<int> res;
    int final_score = 0;
    sort(score.begin(), score.end(), cmp);
    for (int i = 0; i < 5; i++){
        final_score += score[i].first;
        res.push_back(score[i].second);
    }
    sort(res.begin(), res.end());
    cout << final_score << endl;
    for(auto v : res){
        cout << v << " ";
    }
}
