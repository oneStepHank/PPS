#include<iostream>
#include<vector>
#include<stack>
#include<string>

using namespace std;

int main(){
    vector<int> input(8);
    stack<int> asceding;
    stack<int> descending;

    string res = "mixed";
    for (int i = 0; i < 8; i++)
    {
        asceding.push(8-i); // 8 7 6 5 4 3 2 1
        descending.push(i+1); // 1 2 3 4 5 6 7 8
        cin >> input[i];
    }

    if(input[0]==1){
        for (int i = 0; i < 8; i++){
            if(asceding.top()==input[i]){
                asceding.pop();
            }else{
                break;
            }
        }
        if(asceding.empty())
            res = "ascending";
    }
    else if (input[0] == 8)
    {
        //descending
         for (int i = 0; i < 8; i++){
            if(descending.top()==input[i]){
                descending.pop();
            }else{
                break;
            }
        }
        if(descending.empty())
            res = "descending";
    }
    cout << res;
}