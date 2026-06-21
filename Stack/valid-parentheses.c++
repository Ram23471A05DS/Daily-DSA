#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isValid(string s){
        stack<char> st;

        if(s.size()==0) return true;

        for(auto c:s){
            if(st.empty()){
                if(c==')' || c=='}' || c==']') return false;
                st.push(c);
            }
            else{
                if(c==')' && st.top()=='(' || c=='}' && st.top()=='{' || c==']' && st.top()=='['){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }

        return st.empty();
    }
};

int main(){
    string s="()[]{}";

    Solution obj;

    if(obj.isValid(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}