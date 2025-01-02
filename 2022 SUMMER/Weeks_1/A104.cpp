//A104
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int findMinValue(int *array, int n){
    int min = array[0];
    
    for(int i = 1; i < n ; i++){
        min = min > array[i]? array[i] : min;
    }
    return min;
}

int main(){
    int N;
    cin >> N;
    
    int cost[N], course[N];
    int totalsum = 0;
    
    for(int i = 0 ; i < N ; i++){
        cin >> cost[i];
        totalsum += cost[i];
    }
    
    for(int i = 0 ; i < N ; i++){
        course[i] = totalsum - cost[i];
    }
    
    cout << findMinValue(course, N);
    return 0;
}
