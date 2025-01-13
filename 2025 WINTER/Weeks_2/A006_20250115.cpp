#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int count_p = 0, count_y = 0;
    for(char c : s){
        if(c=='p' || c=='P')
            count_p++;
        else if(c=='y' || c=='Y')
            count_y++;
    }

    return count_p==count_y;
}