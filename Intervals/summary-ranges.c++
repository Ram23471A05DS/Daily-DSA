#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<string> summaryRanges(vector<int>& nums){
        vector<string> res;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int s=nums[i];

            while(i+1<n && nums[i]+1==nums[i+1]){
                i++;
            }

            if(s!=nums[i]){
                res.push_back(to_string(s)+"->"+to_string(nums[i]));
            }
            else{
                res.push_back(to_string(nums[i]));
            }
        }

        return res;
    }
};

int main(){
    vector<int> nums={0,1,2,4,5,7};

    Solution obj;
    vector<string> ans=obj.summaryRanges(nums);

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}