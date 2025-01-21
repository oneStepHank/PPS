#include<string>
#include<algorithm>
using namespace std;
class Solution
{
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(columnNumber){
            columnNumber--; // 0-based index
            res += 'A' + (columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};