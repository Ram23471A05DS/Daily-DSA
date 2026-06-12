//Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//Output: [1,2,2,3,5,6]
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
    public:
    void merge(vector<int> &nums1,int m,vector<int> &nums2, int n){
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());
    }
};
int main(){
    vector<int>nums1={1,2,3,0,0,0};
    int m=3;
    vector<int>nums2={2,5,6};
    int n=3;
    Solution obj;
    obj.merge(nums1,m,nums2,n);
    for(int x:nums1){
        cout<< x ;
    }
    return 0;
}