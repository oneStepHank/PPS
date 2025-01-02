//A017
#include <iostream>
#include <string>

using namespace std;

int numberOfCount(char num, string str){
    int i , count = 0;
    
    for(i = 0; i < str.length(); i++){
        
        if(str[i] == num)
            count++;
        else{
            
            continue;
        }
    }
    return count;
}

int findMaxCount(int *array){
    int maxCount = array[0];
    
    for(int i = 1; i < 10 ; i++){
        maxCount = maxCount < array[i]? array[i] : maxCount;
    }
    return maxCount;
}

int main(){
    int count[10];
    string input;
    cin >> input;
    
    for(int i = 0 ; i<10; i++){
        count[i] = numberOfCount('0'+i, input);
    }
    
    if((count[6]+count[9])%2 == 0)
        count[6] = count[9] = (count[6]+count[9])/2;
    else
        count[6] = count[9] = (count[6]+count[9])/2 + 1;
    
    cout << findMaxCount(count);
    
    return 0;
}

