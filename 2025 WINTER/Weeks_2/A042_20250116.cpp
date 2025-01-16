#include <stack>
#include <string>
using namespace std;
/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. 
'#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.
*/
class Solution
{
public:
    bool backspaceCompare(string s, string t) {
        stack<char> f, b;
        for(char c : s){
            if(c!= '#')
                f.push(c);
            else if(!f.empty())
                    f.pop();
        }
        for(char c : t){
            if(c!= '#')
            b.push(c);
            else if(!b.empty())
                b.pop();
        }
        // while (!f.empty() && !b.empty()) {
        //     if (f.top() != b.top()) {
        //         return false;
        //     }
        //     f.pop();
        //     b.pop();
        // }
        return f == b;
    }
};