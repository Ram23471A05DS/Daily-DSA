#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool canConstruct(string ransomNote,string magazine){
        unordered_map<char,int> mp;

        for(auto i:magazine){
            mp[i]++;
        }

        for(auto i:ransomNote){
            if(mp[i]<=0) return false;
            mp[i]--;
        }

        return true;
    }
};

int main(){
    string ransomNote="aa";
    string magazine="aab";

    Solution obj;

    if(obj.canConstruct(ransomNote,magazine)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}