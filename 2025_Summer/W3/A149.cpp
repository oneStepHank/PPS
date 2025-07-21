#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> person; // <weight, height>
    for (int i = 0; i < n; i++){
        int w, h;
        cin >> w >> h;
        person.push_back(make_pair(w, h));
    }

    vector<int> rank(n, 1);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {   
            if(i!=j && person[j].first > person[i].first && person[j].second > person[i].second){
                // other.weight > p.weight and other.height > p.height => rank num increase
                rank[i]++;
            }
        }
        
    }
    for(int var : rank)
    {
        cout << var << '\n';
    }
}