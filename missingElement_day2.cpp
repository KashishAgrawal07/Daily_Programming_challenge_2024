#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr){
    int n = arr.size() + 1;
    int totalSum = n * (n + 1) / 2;

    int arrSum = 0;
    for(int i : arr){
        arrSum = arrSum + i;
    }

    int result = totalSum - arrSum;

    return result;
}

int main(){

    vector<int> arr = {1,2,4,5};
   
    int result = search(arr);
    cout<<result;
    return 0;
}