#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs) {
       string lcp = strs[0]; // 초기 longthest common prefix
       int max_length = lcp.size(); // lcp가 가질 수 있는 최대 문자열의 길이 : max_length
       for(int i = 1; i<strs.size(); i++){ 
            string new_lcp = ""; // lcp 값 업데이트를 위한 변수
            //현재 문자열과 비교하여 기존의 lcp의 문자열의 길이 확인 , max_length 업데이트
            max_length = max_length < strs[i].size()? max_length : strs[i].size();
            for(int j = 0 ; j < max_length; j++){ // max_length 만큼만 문자열 확인
                if(lcp[j]==strs[i][j]) // 비교하는 위치의 문자가 같다면 new_lcp에 추가
                    new_lcp += lcp[j];
                else{ // 다르다면
                    if(j==0) // 한문자도 같지 않다면 "" return
                        return "";
                    break;
                }
            }
            // lcp 업데이트
            lcp = new_lcp;
       }
       return lcp;
    }
};