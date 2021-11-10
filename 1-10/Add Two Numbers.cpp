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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode head = ListNode();
        ListNode p = *l1, q = *l2, *curr = &head;
        int carry = 0;
        while (p.val != 11 or q.val != 11)
        {
            int x = (p.val != 11) ? p.val : 0;
            int y = (q.val != 11) ? q.val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            curr -> next = new ListNode(sum % 10);
            curr = (*curr).next;
            p = (p.next != NULL) ? *p.next : ListNode(11);
            q = (q.next != NULL) ? *q.next : ListNode(11);
        }
        if (carry > 0) {
            curr -> next = new ListNode(carry);
        }
        return head.next;
    }
};
