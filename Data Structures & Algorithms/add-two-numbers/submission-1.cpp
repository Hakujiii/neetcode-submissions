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
// don't need to reverse the whole list.
// add one digit at a time -> the digit should be the sum of two nodes from two lists.
// if sum > 10, take mod % 10 -> carry the remaining digit and add it to the next sum.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int sum = carry;
            if(l1 != nullptr){
               sum += l1->val;
               l1 = l1->next;
            }
            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
        tail->next = new ListNode(sum%10);
        tail = tail->next;
        carry = sum/10;
        }
        return dummy.next;
    }
};
