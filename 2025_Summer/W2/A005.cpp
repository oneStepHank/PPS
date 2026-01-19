#include <string>
#include <vector>

using namespace std;

/*
string과 같은 동적 메모리 할당되는 친구들은, 값이 커지면 함수를 호출하는 과정에서 복사하게 된다면 메모리 소모가 많아진다~
함수 호출 후, 값의 수정이 없다면 const , 그리고 포인터로 봐, 값을 복사하지 않고 참조하는 것이 더 좋다는 것!
<const string& 로 사용한 이유>
*/

bool isValid(const string& skill, const string& skill_tree){
    int currentOrder = 0; // 옳바른 스킬 순서를 나타내주는 index : skill[currentOrder]
    // skill_tree에서 skill 순서와 상관없는 skill들은 확인 필요가 없다
    for(char c : skill_tree){
        // string.find(char) -> string에 char를 찾을 수 없다면 string::npos를 반환(size_t의 최대값)
        // char가 존재한다면, 해당 index를 반환
        if(skill.find(c) == string::npos){
            continue; 
        }else{
            // 확인해야할 스킬에서, 해당 스킬이 옳바른 순서인가?
            if(c!=skill[currentOrder]){
                //옳바른 순서가 아니기에 false
                return false;
            }
            currentOrder++; // 다음 스킬 순서를 확인
        }
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for (const string &skill_tree : skill_trees)
    {
        if(isValid(skill, skill_tree))
            answer++;
    }
    return answer;
}