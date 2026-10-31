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
// traverse through the list once -> count the elements -> find the Nth node from the end of the list.
// traverse through the list again -> stop at count - node -> skip that node -> return head.
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;
        while(curr != nullptr){
             curr = curr->next;
             count++;
        }
        ListNode dummy(0, head);
        curr = &dummy;
        for(int i = 0; i < count - n; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return dummy.next;
    }
};
