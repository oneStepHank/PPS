#include<iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> res;
    while (n--)
    {
        int s;
        cin >> s;
        
        vector<int> vec(s);
        int sum = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }
        double avg = (double)sum / (double)vec.size();

        int nBigger = 0;
        for(auto v : vec){
            if(v > avg)
                nBigger++;
        }
        double percent = (double)nBigger / (double)vec.size() * 100.0;
        res.push_back(percent);
    }
    for(auto v : res){
        //fixed : 고정 , setprecision : 소수점 이하 3자리
        cout << std::fixed << std::setprecision(3)<< v << "%\n";
    }
}