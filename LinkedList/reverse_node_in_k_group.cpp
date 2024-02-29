#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    int length(ListNode* head) {
        ListNode*dummy=head;
        int count = 0;
        while (dummy != NULL) {
            count++;
            dummy = dummy->next;
        }
        return count;
    }

     ListNode* helper(int len, int k, ListNode* head) {
        if (len < k)
            return head;
        ListNode *prev = NULL, *curr = head, *nex = NULL;
        int cnt=0;
        while (curr != NULL && cnt<k) {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            cnt++;
        }
        head->next=helper(len-k,k,nex);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* ans = head;
        int len=length(head);
        cout<<len<<" ";
        return helper(len,k,head);
        return ans;
    }
};


int main() {
    // cout << "hello";
    return 0;
}