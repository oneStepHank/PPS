#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto v : commands){
        vector<int> tmp;
        for(size_t i = v[0]-1 ; i < v[1]; i++) //slicing
            tmp.push_back(array[i]);
        sort(tmp.begin(), tmp.end()); // sort
        answer.push_back(tmp[v[2] - 1]); //find value
    }
    return answer;
}