#include <bits/stdc++.h>
#include <vector>
using namespace std;

int largestarr(vector<int>& nums) {
    int largest = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[largest]) {
            largest = nums[i];
        }
    }
    return largest;
}

int main() {
    vector<int> nums = {44, 5, 33, 77, 34, 23};
    cout<< largestarr(nums);
    
    return 0;
}