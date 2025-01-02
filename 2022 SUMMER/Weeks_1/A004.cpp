#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int>::iterator iter;
    
    for(iter = arr.begin() ; iter != arr.end() ; ++iter){
        if(*iter % divisor == 0)
            answer.push_back(*iter);
    }
    
    sort(answer.begin(), answer.end());
    
    if(answer.empty())
        answer.push_back(-1);
    return answer;
}
