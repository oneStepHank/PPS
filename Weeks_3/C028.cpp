#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

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
