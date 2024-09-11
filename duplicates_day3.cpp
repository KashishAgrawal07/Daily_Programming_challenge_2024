#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& arr){
    int n = arr.size();
    int frequency[] = {0};

    for(int i = 0; i<n ; i++){
        if(frequency[arr[i]] == 0){
            frequency[arr[i]] += 1;
        }else{
            return arr[i];
        }   
    }
}

int main(){
     vector<int> arr = {3, 1, 3, 4, 2};
   
    int result = findDuplicate(arr);
    cout<<result;
    return 0;
}
