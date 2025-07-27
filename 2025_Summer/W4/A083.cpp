#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    sort(nums.begin(), nums.end());
    // unique -> 벡터값에서 중복값을 제거하면서 채워넣기, 중복값 제거 이후 남은 인덱스에 대해서는 기존 인덱스 값으로 채워넣음
    // v.erase(v.begin()+s, v.begin()+e) 명령어를 입력하면 [s,e) 원소가 삭제된다
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    for (auto var : nums)
    {
        cout << var << " ";
    }
}