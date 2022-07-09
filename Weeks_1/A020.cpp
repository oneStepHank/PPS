//A020
#include <iostream>
#include <string>

using namespace std;


int main(){
    int i , j;
    int person[4][2];
    person[0][0] = 0;
    int maxPerson = person[0][0];
    int personN = 0;
    
    
    for( i = 0 ; i < 4; i++){
        for(j = 0 ; j<2 ; j++){
            cin >> person[i][j];
            if(i != 0 && j == 0){
                personN -= person[i][j];
                maxPerson = personN > maxPerson ? personN : maxPerson;
            }
        }
        personN += person[i][1];
        maxPerson = personN > maxPerson ? personN : maxPerson;
        
    }
    cout << maxPerson << "\n";
    return 0;
}

