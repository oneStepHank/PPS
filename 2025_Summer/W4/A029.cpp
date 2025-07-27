#include <iostream>
using namespace std;

int main(){
    
    int N, start;
    cin >> N >> start;
    if(N>=6){
        cout << "Love is open door";
        return 0;
    }else{
        int prior_n = !start;
        for (int i = 0; i < N-1; i++){
            cout << prior_n;
            if (i < N - 2)
                cout << endl;
            prior_n = !prior_n;
        }
    }
}