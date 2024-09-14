#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<std::pair<int, int>> findSumArrays(const vector<int>& arr) {
    unordered_map<int, vector<int>> map;
    vector<pair<int, int>> result;
    
    int sum = 0;
   map[0].push_back(-1);  
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];

        if (map.find(sum) != map.end()) {
            
            for (int start_index : map[sum]) {
                result.push_back({start_index + 1, i});
            }
        }

       
        map[sum].push_back(i);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> subarrays = findSumArrays(arr);

    cout<<"[";
    for (const auto& p : subarrays) {
        cout << "(" << p.first << ", " << p.second << ")" ;
    }

    cout<<"]";

    return 0;
}
