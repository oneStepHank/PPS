#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    vector<int> nums;
    nums.push_back(1);
    vector<int>::iterator iter = nums.begin();
    vector<string> result;
            
    vector<int>::iterator start_point = iter;
            
    while(iter != nums.end()){
        vector<int>::iterator compare = iter+1;
        if(*compare - *iter == 1){
            iter = compare;
            continue;
        }
        else{
            if(*start_point == *iter)
                result.push_back(to_string(*start_point));
            else
                result.push_back(to_string(*start_point) + "->"+ to_string(*iter));
            iter++;
            start_point = iter;
        }
    }
    
    for(vector<string>::iterator s = result.begin(); s != result.end() ; s++){
        cout << *s << endl;
    }
    return 0;
}

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<int>::iterator iter = nums.begin();
    vector<string> result;
            
    vector<int>::iterator start_point = iter;
            
    while(iter != nums.end()){
        vector<int>::iterator compare = iter+1;
        if(*compare - *iter == 1){
            iter = compare;
            continue;
        }
        else{
            if(*start_point == *iter)
                result.push_back(to_string(*start_point));
            else
                result.push_back(to_string(*start_point) + "->"+ to_string(*iter));
            iter++;
            start_point = iter;
        }
    }
        return result;
    }
};
