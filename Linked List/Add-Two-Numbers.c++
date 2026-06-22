#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;

    ListNode(){
        val=0;
        next=nullptr;
    }

    ListNode(int x){
        val=x;
        next=nullptr;
    }

    ListNode(int x,ListNode *next){
        val=x;
        this->next=next;
    }
};

class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        ListNode* d=new ListNode(0);
        ListNode* temp=d;
        int c=0;

        while(l1!=nullptr || l2!=nullptr){
            int s=0;

            if(l1!=nullptr){
                s+=l1->val;
                l1=l1->next;
            }

            if(l2!=nullptr){
                s+=l2->val;
                l2=l2->next;
            }

            s+=c;
            c=s/10;

            temp->next=new ListNode(s%10);
            temp=temp->next;
        }

        if(c!=0){
            temp->next=new ListNode(c);
        }

        return d->next;
    }
};

int main(){
    ListNode* l1=new ListNode(2);
    l1->next=new ListNode(4);
    l1->next->next=new ListNode(3);

    ListNode* l2=new ListNode(5);
    l2->next=new ListNode(6);
    l2->next->next=new ListNode(4);

    Solution obj;
    ListNode* ans=obj.addTwoNumbers(l1,l2);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}