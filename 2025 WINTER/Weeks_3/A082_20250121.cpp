#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortingByOld(pair<int,string> f, pair<int,string> b){
    return f.first < b.first;
}
int main(){
    int N;
    vector<pair<int, string>> res;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        pair<int, string> input;
        cin >> input.first >> input.second;
        res.push_back(input);
    }
    stable_sort(res.begin(), res.end(), sortingByOld); // stable_sort : 비교 조건 이외는 입력받는 순으로 정렬
    for(auto v : res){
        cout << v.first << " " << v.second << "\n";
    }
}