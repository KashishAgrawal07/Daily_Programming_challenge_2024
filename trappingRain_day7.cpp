#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trapRainWater(const vector<int>& heights) {
    int n = heights.size();
    if (n == 0) return 0;

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;

    while (left <= right) {
        if (heights[left] <= heights[right]) {
            if (heights[left] >= leftMax) {
                leftMax = heights[left];
            } else {
                waterTrapped += leftMax - heights[left];
            }
            left++;
        } else {
            if (heights[right] >= rightMax) {
                rightMax = heights[right];
            } else {
                waterTrapped += rightMax - heights[right];
            }
            right--;
        }
    }

    return waterTrapped;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int result = trapRainWater(height);
    cout << result << endl;

    return 0;
}
