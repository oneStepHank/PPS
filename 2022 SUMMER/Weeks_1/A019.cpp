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

int main(){
    int result[3];
    int calc = 1;
    
    
    for(int i = 0 ; i< 3 ; i++){
        scanf("%d", &result[i]);
        calc *= result[i];
    }
    
    string temp = to_string(calc);
    
    for(int i = 0 ; i< 10 ; i++){
        cout << numberOfCount('0'+i, temp) << "\n" ;
    }
    
    
    return 0;
}
