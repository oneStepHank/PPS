#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    string validEmail(string str) {
        int index = str.find('@');
        string firstName = str.substr(0, index);
        string domainName = str.substr(index);
        string validFirstName;
        for(int i = 0; i < firstName.length(); i++) {
            if(firstName[i] == '.') i++;
            else if(firstName[i] == '+') break;
            validFirstName += firstName[i];
        }
        return validFirstName + domainName;
    }
    
    int numUniqueEmails(vector<string>& emails) {
        map<string, int> mp;
        for(string str : emails) mp[validEmail(str)] = 1;
        int res = 0;
        for(auto it : mp) res += it.second;
        return res;
    }
};
