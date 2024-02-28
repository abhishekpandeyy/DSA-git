#include <bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head->next==NULL && n==1)
        // return NULL;
        ListNode*newHead=new ListNode();
        newHead->next=head;
        ListNode* fast = newHead,*delay=newHead;
        for(int a=1;a<=n;++a){
            fast=fast->next;
        }
        while(fast!=NULL && fast->next!=NULL)
        {   delay=delay->next;
            fast=fast->next;
        }
        // if(head==delay)
        // return head->next;
        // if(delay->next==NULL){
        //   ListNode*nul=NULL;
        //   delay=nul;
        // }
        // else{
        ListNode*temp=delay->next->next;
        delay->next=temp;
        // }
        return newHead->next;
    }
};

int main() {
    // cout << "hello";
    return 0;
}