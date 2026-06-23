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
    ListNode* rotateRight(ListNode* head,int k){
        if(head==nullptr) return head;

        ListNode* temp=head;
        int c=0;
        ListNode* h;

        while(temp!=nullptr){
            c++;
            h=temp;
            temp=temp->next;
        }

        k=k%c;

        if(k==0){
            return head;
        }

        ListNode* x=head;
        ListNode* y=nullptr;

        for(int i=1;i<c-k;i++){
            x=x->next;
        }

        y=x->next;
        x->next=nullptr;
        h->next=head;

        return y;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    int k=2;

    Solution obj;
    ListNode* ans=obj.rotateRight(head,k);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}