#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> res;
    res.push_back(s);
    for (size_t i = 1; i < s.size(); i++)
    {
        res.push_back(s.substr(i, s.size() - i));
    }
    sort(res.begin(), res.end());
    for(auto c : res){
        cout << c << "\n";
    }
}