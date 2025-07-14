#include <iostream>
using namespace std;
int main(){
    unsigned int n;
    cin >> n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        int A,B;
        cin >> A >> B;
        arr[i] = A+B;
    }
    for(auto e : arr){
        cout << e << "\n";
    }
}