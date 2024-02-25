//143.leetcode
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* dummy = head;
        stack<int> s;
        while (dummy != NULL) {
            s.push(dummy->val);
            dummy = dummy->next;
        }
        dummy=head;
        while (head != NULL) {
            ListNode* nex = head->next;
            head->next = new ListNode(s.top());
            head = head->next;
            head->next = nex;
            s.pop();
            head = head->next;
        }
        ListNode*slow=dummy,*f=dummy;
        while(f!=NULL && f->next!=NULL)
        {
            f=f->next;
            if(f->next==NULL)
            slow->next=NULL;
            f=f->next;
            slow=slow->next;
        }
        return;
    }
};