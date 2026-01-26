#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int time[n], price[2] = {0};
    for(int i = 0 ; i< n ; i++){
        cin >> time[i];
    }
    
    for(int i = 0 ; i< n ; i++){
        price[0] += (time[i]/30 + 1) * 10;
        price[1] += (time[i]/60 + 1) * 15;
    }
    
    if(price[0] < price[1])
        cout << "Y " << price[0] ;
    else if(price[0] > price[1])
        cout << "M " << price[1] ;
    else
        cout << "Y M " << price[0];
    return 0;
}
