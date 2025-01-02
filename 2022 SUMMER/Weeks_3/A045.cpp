#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    string str;
    cin >> str;
    map<char,int> wordCount;
    
    for(int i = 0 ; i< str.size() ; i++){
        str[i] = toupper(str[i]);
        wordCount[str[i]]++;
    }
    int find = 0;
    char result = '\0';
    for(auto x : wordCount){
        if(x.second > find)
        {
            result = x.first;
            find = x.second;
        }
        else if(x.second == find){
            result = '?';
            
        }
    }
    cout << result;
    return 0;
}
