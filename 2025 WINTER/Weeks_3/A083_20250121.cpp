#include<iostream>
#include <set>
using namespace std;

int main(){
    int N ;
    cin >> N;
    set<int> res;
    for(int i = 0 ; i< N ; i++){
        int tmp;
        cin >> tmp;
        if(res.count(tmp))
            continue;
        res.insert(tmp);
    }
    for(auto s : res){
        cout << s << " ";
    }
}