#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
좋은 패스워드를 만드는것은 어려운 일이다. 대부분의 사용자들은 buddy처럼 발음하기 좋고 기억하기 쉬운 패스워드를 원하나, 
이런 패스워드들은 보안의 문제가 발생한다. 어떤 사이트들은 xvtpzyo 같은 비밀번호를 무작위로 부여해 주기도 하지만, 
사용자들은 이를 외우는데 어려움을 느끼고 심지어는 포스트잇에 적어 컴퓨터에 붙여놓는다. 
가장 이상적인 해결법은 '발음이 가능한' 패스워드를 만드는 것으로 적당히 외우기 쉬우면서도 안전하게 계정을 지킬 수 있다. 

회사 FnordCom은 그런 패스워드 생성기를 만들려고 계획중이다. 
당신은 그 회사 품질 관리 부서의 직원으로 생성기를 테스트해보고 생성되는 패스워드의 품질을 평가하여야 한다. 
높은 품질을 가진 비밀번호의 조건은 다음과 같다.

모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
*/

bool isOval(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c =='o' || c== 'u');
}
bool isAcceptable(const string& s){
    bool hasOval = false;
    int exit_count = 1; // 속성값(모음/자음)
    for (size_t i = 0; i < s.size(); i++)
    {
        if(!hasOval) // 모음을 현재 가지고 있지 않다면? 모음을 가지는지 확인
            hasOval = isOval(s[i]);

        if(i > 0){ // 2, 3번 규칙확인
            if(s[i]==s[i-1]){ // 연속으로 같은 문자라면
                if(s[i] == 'e' || s[i] == 'o') // e, o 를 제외하고는 
                    continue;
                return false; // 모두 false
            }

            if(isOval(s[i-1]) == isOval(s[i])) // 연속된 속성값 확인 , 
                exit_count++; // 같은 속성이라면 exit_count ++
            else
                exit_count = 1; // 다르다면 exit_count 초기화
        }
        if(exit_count >= 3) // 같은 속성값이 3이상(3개 연속 같은 속성이라면) false
            return false;
    }
    return hasOval;
}

string printFormat(const string& s , bool acceptable = false){
    if(!acceptable){
        acceptable = isAcceptable(s);
    }

    string res = '<' + s + "> is "; 
    if(acceptable)
        res += "acceptable.";
    else
        res += "not acceptable.";
    return res;
}

int main(){
    string s;
    vector<string> res;
    while (cin >> s)
    {
        if(s == "end")
            break;
        res.push_back(printFormat(s));
    }

    for(string s : res){
        cout << s << "\n";
    }
}