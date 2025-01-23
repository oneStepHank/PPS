#include <iostream>
#include<vector>
#define MAX 1'000'001
using namespace std;

vector<int> Prime(MAX, true);
void seive(){
    Prime[0] = Prime[1] = false;
    for (size_t i = 2; i*i < MAX; i++)
    {
        if(Prime[i]){
            for (size_t j = i*i; j <= MAX; j+=i)
            {
                Prime[j] = false;
            }
                }
    }
    
}
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    vector<int> ans;
    seive();
    for (int i = 0; i < T; i++)
    {
        int num;
        cin >> num;
        int goldbach = 0;
        for (int j = 2; j <= num / 2; j++)
        {
            if(Prime[j] && Prime[num-j])
                goldbach++;
        }
        ans.push_back(goldbach);
    }
    for(int n : ans){
        cout << n << "\n";
    }
    return 0;
}
