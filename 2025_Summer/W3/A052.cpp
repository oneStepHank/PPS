#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> score (n,0);
    for(int i = 0 ; i< n ; i++){
        int sum = 0;
        string temp;
        cin >> temp;
        for(int j = 0 ; j< temp.size(); j++){
            if(temp[j] == 'X')
               sum = 0;
            else
                score[i] += ++sum;
        }
    }
    for(int i = 0 ; i< n ; i++)
        cout << score[i] << endl;
    return 0;
}
