
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

class Solution
{
public:
    ListNode *rev(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *next = NULL, *prev = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(0);
        ListNode *dummy = ans;
        l1 = rev(l1);
        l2 = rev(l2);
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            if (l1 != NULL)
            {
                carry += (l1->val);
                l1 = (l1->next);
            }
            if (l2 != NULL)
            {
                carry += l2->val;
                l2 = l2->next;
            }
            ans->next = new ListNode(carry % 10);
            carry /= 10;
            ans = ans->next;
        }
        return rev(dummy->next);
    }
};