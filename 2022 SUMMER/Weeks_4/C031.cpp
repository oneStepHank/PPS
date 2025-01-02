#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int count_x(string t){
    int count = 0;
    for(int i = 0 ; i < t.size() ; i++)
        if(t[i] == 'x')
            count++;
    return count;
}

string calc(string t){
    string result;
    
    if(t.size() == 1)
        {
            if(t[0] == '1')
                result += "x";
            else
                result += t + "x";
        }
    else
    {
        result = to_string(stoi(t.substr(0, t.find("x")))/(count_x(t)+1));
        if(t[0]=='2' && t.find('x') == 1)
            result="";
        for(int i = 0 ; i< count_x(t) + 1 ; i++)
            result+="x";
    }
    return result;
}


int main(){
    string fx;
    cin >> fx;
    int start = 0;
    
    string ans;
    string temp = "";
    
    if(fx[0] == '-'){
        ans += fx[0];
        start++;
    }
    
    for(int i = start ; i < fx.size() ; i++){
        if(isdigit(fx[i]) || fx[i] == 'x')
            temp += fx[i];
        else{
            if(fx[i+1] == '0')
                continue;
            
            ans += calc(temp);
            ans += fx[i];
            temp = "";
        }
    }
    
    ans += calc(temp);
    ans += "+W";
    
    if(fx == "0" || fx == "-0")
        ans = "W";
    
    cout << ans;
    
    return 0;
}
