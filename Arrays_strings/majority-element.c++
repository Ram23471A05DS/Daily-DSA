#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]=mp[i]+1;
        }
        for(auto i:mp){
            if(i.second>n/2) return i.first;
        }
        return -1;
    }
};

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    Solution obj;
    cout<<obj.majorityElement(nums);
    return 0;
}