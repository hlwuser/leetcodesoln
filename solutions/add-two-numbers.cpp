/*
 * Problem: 2. Add Two Numbers
 * URL: https://leetcode.com/problems/add-two-numbers/
 * Date: 2026-02-15
 */

class Solution {class Solution {
public:public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);        ListNode dummy(0);
        ListNode* temp = &dummy;        ListNode* temp = &dummy;
        int carry = 0;        int carry = 0;
                
        while (l1 != nullptr || l2 != nullptr || carry) {        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;            int sum = carry;
                        
            if (l1 != nullptr) {            if (l1 != nullptr) {
                sum += l1->val;                sum += l1->val;
                l1 = l1->next;                l1 = l1->next;
            }            }
                        
            if (l2 != nullptr) {            if (l2 != nullptr) {
                sum += l2->val;                sum += l2->val;
                l2 = l2->next;                l2 = l2->next;
            }            }
                        
            carry = sum / 10;            carry = sum / 10;
            temp->next = new ListNode(sum % 10);            temp->next = new ListNode(sum % 10);
            temp = temp->next;            temp = temp->next;
        }        }
                
        return dummy.next;        return dummy.next;
    }    }
};};