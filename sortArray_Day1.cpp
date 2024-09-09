#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortArray(vector<int>& nums) {
        int zCnt = 0, oCnt = 0;
        for(int color : nums){
            if(color == 0){
                zCnt++;
            }
            else if(color == 1){
                oCnt++;
            }
        }
        
       for(int i = 0;i < nums.size(); i++){
        if(i < zCnt)
            nums[i] = 0;
        else if( i < zCnt + oCnt)
            nums[i] = 1;
        
        else
            nums[i] = 2;

       }

    }
};

int main(){
    Solution s;
    vector<int> input_arr = {0,1,2,1,0,2,1,0};

    s.sortArray(input_arr);

    for(int i : input_arr){
        cout<<i<<" ";
    }

    return 0;

}