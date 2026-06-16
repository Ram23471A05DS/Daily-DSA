#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isIsomorphic(string s,string t){
        vector<int> mp1(256,-1);
        vector<int> mp2(256,-1);

        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            if(mp1[s[i]]!=mp2[t[i]]){
                return false;
            }
            else{
                mp1[s[i]]=i;
                mp2[t[i]]=i;
            }
        }

        return true;
    }
};

int main(){
    string s="egg";
    string t="add";

    Solution obj;

    if(obj.isIsomorphic(s,t)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}