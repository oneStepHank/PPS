#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <algorithm> // distance 사용
using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M; // N개의 포켓몬 , M개의 문제
    cin >> N >> M;
    map<int, string> pocketmon_name;
    map<string, int> pocketmon_order;
    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        pocketmon_name[i + 1] = name;
        pocketmon_order[name] = i + 1;
    }
    vector<string> res;
    for (int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        if(isdigit(input[0]))
            res.push_back(pocketmon_name[stoi(input)]); // find name by number of pocketmon
        else
            res.push_back(to_string(pocketmon_order[input])); // find the order by name
    }
    for(auto s : res){
        cout << s << "\n";
    }
        return 0;
}
