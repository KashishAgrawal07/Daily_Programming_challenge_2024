#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> arr){

    int n = arr.size();

    if (n == 0) return {};
    
    int max = arr[n-1];
    vector<int> ans;

    ans.push_back(max);

    for(int i=n-2 ;i>=0; i--){

        if(arr[i] > max){
            max = arr[i];
           ans.push_back(max);
        }

    }

    reverse(ans.begin(), ans.end());

    return ans;

}

int main(){
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> ans = findLeaders(arr);

    for (int leader : ans) {
        cout << leader << " ";
    }

    return 0;
}