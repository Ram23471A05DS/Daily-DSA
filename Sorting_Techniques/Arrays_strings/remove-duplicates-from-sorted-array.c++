#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int t = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[t] != nums[i]) {
                t++;
                nums[t] = nums[i];
            }
        }
    return t + 1;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}