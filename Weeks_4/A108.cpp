#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string calculator(string s){
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    
    return to_string(stoi(s)+stoi(reverse_s));
};

bool isPalindrome(string s) {
    string check =s;
    reverse(check.begin(), check.end());
    return check == s;
};


int main(){
    int n;
    cin >> n;
    vector<string> ans;
    
    for(int i = 0 ; i< n ; i++){
        string str;
        cin >> str;
        if(isPalindrome(calculator(str)))
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for(int i = 0 ; i< ans.size() ; i++)
        cout << ans[i] << endl;
    return 0;
}
