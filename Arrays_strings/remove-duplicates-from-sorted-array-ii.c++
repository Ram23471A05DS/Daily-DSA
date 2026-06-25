#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int k=0;

        for(int i=0;i<nums.size();i++){
            if(k<2 || nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }

        return k;
    }
};

int main(){
    vector<int> nums={1,1,1,2,2,3};

    Solution obj;
    int k=obj.removeDuplicates(nums);

    cout<<k<<endl;

    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}