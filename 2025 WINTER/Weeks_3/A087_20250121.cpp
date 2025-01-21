#include<vector>
using namespace std;
class Solution
{
private:
    static bool sortByDescending(vector<int> f, vector<int> b){
        return f[1] > b[1];
    }
public: 
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int sum = 0;
        int count = 0;
        sort(boxTypes.begin(), boxTypes.end(), sortByDescending);
        for(auto v : boxTypes){
            // v[1] is units per box
            if(v[0] + count < truckSize){
                sum += v[0]*v[1];
                count += v[0];
            }else{
                // current count + v[0] > truckSize, choose (truckSize - count)-boxes.
                sum += v[1]*(truckSize - count);
                break;
            }
        }

        return sum;
    }
};