#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<string> ibm;
    for(int i = 0 ; i< n ; i++){
        string tmp;
        cin >> tmp;
        for(int j = 0 ; j< tmp.size(); j++){
            if(tmp[j] == 'Z')
                tmp[j] = 'A';
            else
                tmp[j] = tmp[j]+1;
        }
        ibm.push_back(tmp);
    }
    for(int i = 0 ; i< ibm.size(); i++){
        printf("String #%d\n", i+1);
        cout << ibm[i] << "\n\n";
    }
    return 0;
}
