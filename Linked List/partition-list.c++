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
    ListNode* partition(ListNode* head,int x){
        ListNode* d1=new ListNode(0);
        ListNode* t1=d1;
        ListNode* d2=new ListNode(0);
        ListNode* t2=d2;

        while(head!=nullptr){
            ListNode* v;

            if(head->val<x){
                v=head->next;
                t1->next=head;
                t1=t1->next;
                t1->next=nullptr;
            }
            else{
                v=head->next;
                t2->next=head;
                t2=t2->next;
                t2->next=nullptr;
            }

            head=v;
        }

        t1->next=d2->next;

        return d1->next;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(4);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(2);
    head->next->next->next->next=new ListNode(5);
    head->next->next->next->next->next=new ListNode(2);

    int x=3;

    Solution obj;
    ListNode* ans=obj.partition(head,x);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}