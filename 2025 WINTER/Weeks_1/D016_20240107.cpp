#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

/*
수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표 Xj의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자
*/
using namespace std;
bool sorting_value(pair<int, int> fp, pair<int, int> bp){
    return fp.first < bp.first;
}
bool sorting_index(pair<int,int> fp, pair<int, int> bp){
    return fp.second < bp.second;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입력 받고, 졍렬하고 -> 해당 수가 몇번째 수 인지 알면 x'i로 표현 가능
    // 단 중복이 발생하는 경우 -> 위에서 구한 x'i에서 중복치 만큼 빼면 되는데 
    // 문제는 출력은 원래 순서대로 해줘야한다는 것 
    int N;
    cin >> N;

    vector<pair<int, int>> point;
    map<int, int> mps;
    for (int i = 0; i < N; i ++){
        int value;
        cin >> value;
        point.push_back(make_pair(value, i));
        mps[value]++;
    }
    std::sort(point.begin(), point.end(), sorting_value);
    
    int position = 0;
    vector<pair<int, int>> res;
    for (int i = 0; i < N; i++)
    {
        int current_key = point[i].first;
        
        if(i > 0){
            if(point[i].first != point[i-1].first){
                //값이 중복되지 않는 상황 -> 포지션 업데이트
                position++;
            }
            else
            {
                //이전 값과 동일한 값이라면, 포지션 업데이트 X
            }
        }
        res.push_back(make_pair(position, point[i].second));
    }
   
    std::sort(res.begin(), res.end(), sorting_index);
    for (auto v : res)
    {
        cout << v.first << " ";
    }
}