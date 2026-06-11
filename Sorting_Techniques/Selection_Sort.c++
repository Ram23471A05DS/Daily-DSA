#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int> &nums) {
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i + 1 < nums.size()) cout << ' ';
    }
    cout << '\n';
}

void selectionSort(vector<int> &nums) {
    for (size_t i = 0; i + 1 < nums.size(); ++i) {
        size_t min = i;
        for (size_t j = i + 1; j < nums.size(); ++j) {
            if (nums[j] < nums[min])
                min = j;
        }
        swap(nums[i], nums[min]);
    }
}

int main() {
    vector<int> nums = {22, 3, 455, 33, 33};
    cout << "Original Array:\n";
    printArray(nums);
    selectionSort(nums);
    cout << "Sorted Array:\n";
    printArray(nums);
    return 0;
}