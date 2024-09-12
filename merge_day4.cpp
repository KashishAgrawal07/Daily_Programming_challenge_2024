#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[10], int m, int arr2[10], int n) {
    
    int i = m - 1; 
    int j = n - 1; 
    int k = m + n - 1; 

    // Merge in reverse order
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }
   
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
    
}

int main(){
    int arr1[10] = {1,3,5,0,0,0};
    int arr2[10] = {2,4,6};

    int m = 3;
    int n = 3;

    merge(arr1,m,arr2,n);
    for(int i=0 ; i<m+n ; i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}