#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestConsecutive(vector<int>& nums){
        int n=nums.size();

        if(n==0) return 0;

        sort(nums.begin(),nums.end());

        int maxi=1;
        int current_streek=1;

        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }

            if(nums[i]-nums[i+1]==-1){
                current_streek++;
            }
            else{
                maxi=max(current_streek,maxi);
                current_streek=1;
            }
        }

        return max(current_streek,maxi);
    }
};

int main(){
    vector<int> nums={100,4,200,1,3,2};

    Solution obj;
    cout<<obj.longestConsecutive(nums);

    return 0;
}