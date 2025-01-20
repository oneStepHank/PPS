#include <string>
using namespace std;

class Solution
{
public:
    bool checkRecord(string s) {
        int absence = 0;
        bool prior_late = false; // 바로 직전에 지각을 했는가?
        int late = 0;

        for(char c : s){
            if(c == 'P'){
                prior_late = false;
                continue;
            }
            else if(c == 'A'){ // absence update
                prior_late = false;
                absence++;
            }
            else if(c == 'L'){
                if(!prior_late) // 직전에 지각하지 않았더라면, late = 0으로 초기화
                    late=0;
                late++;
                prior_late = true;
            }

            if(absence >= 2 || late >= 3) // 결석을 두번했거나, 연속으로 지각을 3번했다면 false
                return false;
        }
        return true;
    }
};