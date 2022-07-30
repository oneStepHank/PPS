#include <iostream>
#include <algorithm> // reverse
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> stk;
    vector<int> result;
    
    for(int i = 0 ; i < n; i++){
        string input;
        cin >> input;
        
        if(input == "push"){
            int temp;
            cin >> temp;
            stk.push(temp);
        }
        else if(input == "pop"){
            if(stk.empty())
                result.push_back(-1);
            else
            {
                result.push_back(stk.top());
                stk.pop();
            }
        }else if(input == "size")
            result.push_back(stk.size());
        else if(input == "top"){
            if(stk.empty())
                result.push_back(-1);
            else
                result.push_back(stk.top());
        }else if(input == "empty")
        {
            if(stk.empty())
                result.push_back(1);
            else
                result.push_back(0);
        }
    }
    for(int i = 0 ; i< result.size() ; i++){
        cout << result[i] << endl;
    }
    return 0;
}
