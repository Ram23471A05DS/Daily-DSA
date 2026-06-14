#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution{
public:
    bool isPalindrome(string s){
        string temp="";

        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                temp+=tolower(s[i]);
            }
        }

        int left=0;
        int right=temp.length()-1;

        while(left<right){
            if(temp[left]!=temp[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main(){
    string s="A man, a plan, a canal: Panama";

    Solution obj;

    if(obj.isPalindrome(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}