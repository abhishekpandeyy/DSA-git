//  Definition for singly-linked list.
#include<queue>
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

 struct ListNode {
     int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class mycompare {
public:
    bool operator()(const ListNode* a, const ListNode* b) {
        return (a->val > b->val);
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, mycompare> pq;
        for (int a = 0; a < lists.size(); a++) {
            if (lists[a] != NULL)
                pq.push(lists[a]);
        }
        ListNode* ans = new ListNode(-1);
        ListNode* dummy = ans;
        while (!pq.empty()) {
            // pair<int , ListNode*>p;
            auto p = pq.top();
            ans->next = p;
            pq.pop();
            if (p->next != NULL)
                pq.push(p->next);
            ans = ans->next;
        }
        return dummy->next;
    }
};


int main() {
    cout << "hello";
    return 0;
}