#include <iostream>
#include <string>
using namespace std;

// 그룹 단어 체커
bool isGroupWord(const string& s){
    bool prior_state = true; // 이전 단어가 같은 단어의 연속인지?
    size_t cur_idx;
    size_t i;
    for (cur_idx = 0; cur_idx < s.size(); cur_idx++)
    {
        prior_state = true;
        for (i = cur_idx + 1; i < s.size(); i++)
        {
            if(s[i] != s[cur_idx]){
                prior_state = false;
                continue;
            }else if(!prior_state && s[i]==s[cur_idx]){
                return false;
            }else{  // prior_state = true && s[i] == s[cur_idx]
                continue;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(isGroupWord(s))
            ans++;
    }
        cout << ans;
    return 0;
}
