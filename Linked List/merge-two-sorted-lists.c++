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
    ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
        ListNode* d=new ListNode(0);
        ListNode* temp=d;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                temp->next=new ListNode(list1->val);
                list1=list1->next;
            }
            else{
                temp->next=new ListNode(list2->val);
                list2=list2->next;
            }

            temp=temp->next;
        }

        if(list1!=nullptr){
            temp->next=list1;
        }

        if(list2!=nullptr){
            temp->next=list2;
        }

        return d->next;
    }
};

int main(){
    ListNode* list1=new ListNode(1);
    list1->next=new ListNode(2);
    list1->next->next=new ListNode(4);

    ListNode* list2=new ListNode(1);
    list2->next=new ListNode(3);
    list2->next->next=new ListNode(4);

    Solution obj;
    ListNode* ans=obj.mergeTwoLists(list1,list2);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}