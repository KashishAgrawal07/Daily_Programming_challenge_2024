#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortArray(vector<int>& arr) {
        int zCnt = 0, oCnt = 0;
        for(int color : arr){
            if(color == 0){
                zCnt++;
            }
            else if(color == 1){
                oCnt++;
            }
        }
        
       for(int i = 0;i <arr.size(); i++){
        if(i < zCnt)
            arr[i] = 0;
        else if( i < zCnt + oCnt)
            arr[i] = 1;
        
        else
            arr[i] = 2;

       }

    }
};

int main(){
    Solution s;
    vector<int> arr = {0,1,2,1,0,2,1,0};

    s.sortArray(arr);

    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;

}
