#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;
/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.
*/
bool sorting(string f, string b){
    if(f.size() == b.size()){
        return f < b;
    }
    return f.size() < b.size();
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<string> words;
    
    while(N--){
        string s;
        cin >> s;
        
        words.push_back(s);
    }
    
    sort(words.begin(), words.end(), sorting);
    auto it = unique(words.begin(), words.end()); // 연속된 중복값 제거 -> 새로운 끝위치 반환
    words.erase(it, words.end()); // it 이후 값들은 쓰레기 값으로 제거

    for (auto res : words)
    {
        cout << res << "\n";
    }
}