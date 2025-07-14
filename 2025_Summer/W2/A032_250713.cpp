#include<iostream>
#include <vector>
using namespace std;
/*
a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다
주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라. 

단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.
1 <= k,n <= 14
*/

int main(int argc, const char** argv) {
    int testCase;
    cin >> testCase;
    // N층 K호의 사람 수 : N-1층의 K호까지 사는 사람들의 합 => N층, K-1호 + N-1층 , K호 사람

    int numberOfpeople[15][14] = {}; // first idx : floor (0th - 14th : 15) , second idx : room number(1st - 14th)
    for (int i = 0; i < 14; i++)
    {
        // 0층의 각호에 사는 사람들
        numberOfpeople[0][i] = i + 1;
    }
    
    for (int j = 0; j < 15; j++)
    {
        numberOfpeople[j][0] = 1;
    }
    
    for (int floor = 1; floor < 15; floor++)
    {
        for (int room = 1; room < 14; room++)
        {
            numberOfpeople[floor][room] = numberOfpeople[floor][room - 1] + numberOfpeople[floor - 1][room];
        }
    }

    // for (int floor = 1; floor < 15; floor++)
    // {
    //     for (int room = 0; room < 14; room++)
    //     {
    //         for (int i = 0; i <= room; i++)
    //         {
    //             numberOfpeople[floor][room] += numberOfpeople[floor - 1][i];
    //         }
    //     }
    // }
    vector<int> res;

    for (int i = 0; i < testCase; i++)
    {
        int k, n;
        cin >> k >> n; // k-th floor , n-th room
        res.push_back(numberOfpeople[k][n - 1]);
    }
    for(int ans : res){
        cout << ans << "\n";
    }
}