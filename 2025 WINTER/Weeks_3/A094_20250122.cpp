#include <iostream>
#include <string>
using namespace std;

/* 백준 : 크로아티아 알파벳 */
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    size_t i = 0;
    int count = 0;
    while (i < s.size())
    {
        if(s[i]=='c'){
            if(i+1 < s.size() && s[i+1] == '=' || s[i+1] == '-')
                i += 2;
            else
                i++;
        }
        else if (s[i] == 'd')
        {
            if(i+2 < s.size() && s[i+1]=='z' && s[i+2] == '=')
                i += 3;
            else if(i+1 < s.size() && s[i+1] == '-')
                i += 2;
            else
                i++;
        }
        else if (s[i] == 'l' || s[i] == 'n')
        {
            if(i+1 < s.size() && s[i+1] == 'j')
                i += 2;
            else
                i++;
        }
        else if (s[i] == 's' || s[i] == 'z')
        {
            if(i+1 < s.size() && s[i+1] == '=')
                i += 2;
            else
                i++;
        }else
            i++;
        count++;
    }
    cout << count;
    return 0;
}
