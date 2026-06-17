#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        int n=strs.size();
        unordered_map<string,vector<string>> mp;

        for(string i:strs){
            string key=i;
            sort(key.begin(),key.end());
            mp[key].push_back(i);
        }

        vector<vector<string>> res;

        for(auto i:mp){
            res.push_back(i.second);
        }

        return res;
    }
};

int main(){
    vector<string> strs={"eat","tea","tan","ate","nat","bat"};

    Solution obj;
    vector<vector<string>> ans=obj.groupAnagrams(strs);

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}