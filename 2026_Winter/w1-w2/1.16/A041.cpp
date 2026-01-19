#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    size_t start = 0;
    while (true)
    {
        size_t end = s.find(' ', start);
        string sub = "";
        if (end == std::string::npos)
        {
            sub = s.substr(start);
            transform(sub.begin(), sub.end(), sub.begin(), ::tolower);
            sub[0] = toupper(sub[0]);
            answer += sub;
            // cout << sub << endl;
            break;
        }
        else
        {
            sub = s.substr(start,end-start); // substr(start, length()) : start부터 length길이의 문자열을 자른다
            transform(sub.begin(), sub.end(), sub.begin(), ::tolower);
            sub[0] = toupper(sub[0]);
            
            answer += sub +' ';
        }
        start = end + 1;
    }
    return answer;
}

int main(){
    cout << solution("3people unFollowed me") << endl;
}