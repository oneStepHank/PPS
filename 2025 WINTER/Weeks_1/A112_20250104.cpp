#include <iostream>
#include <climits>
/*
Day Of Mourning의 기타리스트 강토가 사용하는 기타에서 N개의 줄이 끊어졌다. 
따라서 새로운 줄을 사거나 교체해야 한다. 강토는 되도록이면 돈을 적게 쓰려고 한다. 
6줄 패키지를 살 수도 있고, 1개 또는 그 이상의 줄을 낱개로 살 수도 있다.

끊어진 기타줄의 개수 N과 기타줄 브랜드 M개가 주어지고, 
각각의 브랜드에서 파는 기타줄 6개가 들어있는 패키지의 가격, 낱개로 살 때의 가격이 주어질 때, 
적어도 N개를 사기 위해 필요한 돈의 수를 최소로 하는 프로그램을 작성하시오.
*/
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int min_pkg = INT_MAX, min_each = INT_MAX;
    for (int i = 0; i < m; i++){
        int price_pkg, price_each;
        cin >> price_pkg >> price_each;

        min_pkg = min_pkg >= price_pkg ? price_pkg : min_pkg;
        min_each = min_each >= price_each ? price_each : min_each;
    }
    int res = INT_MAX;
    // 경우의 수는 패키지 가격으로만 산 경우 , 패키지 + 개별로 산 경우 , 개별로만 산 경우가 있다.

    // pkg + each 인 경우 고려해야 되는 점이 있다. pkg 와 each를 어떻게 쪼갤 것 인가?
    // 만약에 pkg 가격이 each * 6 보다 크다면? => 굳이 pkg로 살 필요가 없음 무조건 개별로 사는 것이 이득.
    if(min_pkg > 6 * min_each)
        res = n * min_each;
    //  그게 아니라면 pkg를 섞어서 사는게 좋은데, pkg로 사서 남은 줄(A개라고하자)에 대해서 가격을 봐야한다.
    else{
        int remain_lines = n % 6;
        //  A * min_each >= min_pkg 라면 pkg를 하나 더 사는 것이 이득!
        if(remain_lines * min_each >= min_pkg){
            res = (n / 6 + 1) * min_pkg;
        }
        else{
            // A * min_each < min_pkg라면 남은 줄에 대해서는 min_each가격으로 사는 것이 이득이다
            res = (n / 6) * min_pkg + remain_lines * min_each;
        }
    }
    cout << res << endl;
    return 0;
}