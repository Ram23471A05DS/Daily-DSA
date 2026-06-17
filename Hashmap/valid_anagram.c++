#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isAnagram(string s,string t){
        int x=s.size();
        int y=t.size();

        unordered_map<char,int> mp;

        for(auto i:s){
            mp[i]++;
        }

        for(auto i:t){
            mp[i]--;
        }

        for(auto i:mp){
            if(i.second!=0) return false;
        }

        return true;
    }
};

int main(){
    string s="anagram";
    string t="nagaram";

    Solution obj;

    if(obj.isAnagram(s,t)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}