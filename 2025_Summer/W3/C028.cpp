#include <iostream>

using namespace std;
// 빠른 출력 => scanf / prinf가 cin , cout보다 빠르다
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i< n ; i++){
        int t1, t2;
        scanf("%d %d", &t1 , &t2);
        printf("%d\n",t1+t2);
    }
    return 0;
}
