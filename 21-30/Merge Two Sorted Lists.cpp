/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head = ListNode();
        ListNode p = *l1, q = *l2, *curr = &head;
        while (p.val != 101 or q.val != 101) {
            if (p.val > q.val) {
                (*curr).next = new ListNode(q.val);
                q = (q.next == NULL)? ListNode(101) : *q.next;
            } else {
                (*curr).next = new ListNode(p.val);
                p = (p.next == NULL)? ListNode(101) : *p.next;
            }
            curr = (*curr).next;
        }
        return head.next;
    }
};
