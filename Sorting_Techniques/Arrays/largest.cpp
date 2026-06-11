#include <bits/stdc++.h>
using namespace std;

int largestarr(const vector<int>& nums) {
    int largest = 0;
    for (int i = 1; i < static_cast<int>(nums.size()); i++) {
        if (nums[i] > nums[largest]) {
            largest = i;
        }
    }
    return largest;
}

int main() {
    vector<int> nums = {44, 5, 33, 77, 34, 23};
    int index = largestarr(nums);
    cout << "Largest element: " << nums[index] << endl;
    return 0;
}