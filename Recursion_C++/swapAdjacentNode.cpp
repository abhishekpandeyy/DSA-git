#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdio>

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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        int counter = 0;
        ListNode *curr = head;
        ListNode *nex = NULL;
        ListNode *prev = NULL;
        while (curr != NULL && counter < 2)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            counter++;
        }
        if (nex != NULL)
            head->next = swapPairs(nex);
        return prev;
    }

    
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(9);

    cout << "Original list: ";
    printList(head);
    ListNode*temp=s.swapPairs(head);
    cout << endl;
    cout << "Swapped list: ";
    printList(temp);
    return 0;
}
