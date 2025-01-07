#include<iostream>
#include <vector>
#include <algorithm>

/*
2차원 평면 위의 점 N개가 주어진다. 
좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오
*/
using namespace std;
bool comp(pair<int, int> a, pair <int, int> b){
    if (a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<pair<int, int>> point;
    while(N--){
        int t1, t2;
        cin >> t1 >> t2;
        point.push_back(make_pair(t1, t2));
    }
    sort(point.begin(), point.end(), comp);
    for (auto v: point){
        cout << v.first << " " << v.second << "\n";
    }
    return 0;
}