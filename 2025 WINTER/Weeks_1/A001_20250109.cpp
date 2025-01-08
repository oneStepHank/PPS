#include<vector>
#include<algorithm>
using namespace std;

// greedy algorithm : 매 순간 “현재 상황에서 가장 좋아 보이는 선택(최적해)“을 하는 방식
// 매순간 최선의 선택을 해서 해결하는 방법

//문제파악
// 아이들이 배고픔에 해당하는 값을 가지고 있고, 쿠키는 배고픔을 해결 할 수 있는 값을 가진다
// 최대한 많은 아이들에게 쿠키를 주는 수를 구해보자
// -> 적은 배고픔을 가진 아이에게, 적은 포만감을 채워줄 수 있는 쿠키를 할당해주자

// cookie -> child
// value of cookie >= child's hunger
// cookie is assigned to child 
// 가장 작은 포만감을 가진 쿠키를 아이들에게 주는데, 해당 아이가 이걸로 충분하다면(cookie >= child) 줘
// 그리고 해당 쿠키 소모, 다음 아이 차례
// 만약 쿠키를 못줬어? 어짜피 이 쿠키 할당 못해 버려

class Solution
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int child =0; 
        int cookie =0 ;
        while(child < g.size() && cookie < s.size()){
            if(s[cookie] >= g[child]){
                child++; 
            }
            cookie++; // cookie is eaten
        }
        return child;
    }
};