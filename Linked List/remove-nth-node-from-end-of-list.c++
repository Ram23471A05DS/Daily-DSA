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
    ListNode* removeNthFromEnd(ListNode* head,int n){
        ListNode* temp=head;
        int c=0;

        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }

        if(n==c){
            head=head->next;
            return head;
        }

        temp=head;

        for(int i=1;i<c-n;i++){
            temp=temp->next;
        }

        temp->next=temp->next->next;

        return head;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    int n=2;

    Solution obj;
    ListNode* ans=obj.removeNthFromEnd(head,n);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}