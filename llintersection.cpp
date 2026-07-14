#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;

        while (p1 != p2) {
            p1 = (p1 == nullptr) ? headB : p1->next;
            p2 = (p2 == nullptr) ? headA : p2->next;
        }

        return p1;
    }
};

int main() {
    // Common part
    ListNode* common = new ListNode(8);
    common->next = new ListNode(10);

    // List A: 4 -> 1 -> 8 -> 10
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    // List B: 5 -> 6 -> 1 -> 8 -> 10
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;

    Solution obj;
    ListNode* ans = obj.getIntersectionNode(headA, headB);

    if (ans)
        cout << "Intersection Node = " << ans->val << endl;
    else
        cout << "No Intersection" << endl;

    return 0;
}