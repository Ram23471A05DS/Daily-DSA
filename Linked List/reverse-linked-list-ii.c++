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
    ListNode* reverseBetween(ListNode* head,int left,int right){
        if(head==nullptr) return head;
        if(left-right==0) return head;

        ListNode* d=new ListNode(0);
        d->next=head;

        ListNode* temp=d;

        for(int i=1;i<left;i++){
            temp=temp->next;
        }

        ListNode* n_next=nullptr;
        ListNode* current=temp->next;

        for(int i=0;i<right-left;i++){
            n_next=current->next;
            current->next=n_next->next;
            n_next->next=temp->next;
            temp->next=n_next;
        }

        return d->next;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    int left=2;
    int right=4;

    Solution obj;
    ListNode* ans=obj.reverseBetween(head,left,right);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}