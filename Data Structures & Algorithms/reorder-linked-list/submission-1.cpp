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
    void reorderList(ListNode* head) {
        ListNode* curr = head;
        //Count and divide:
        int count = 0;
        while(curr != nullptr){
             curr = curr->next;
            count++;
        }
        int n = count;
        ListNode* mid = head;
        for(int i = 0; i < (n - 1)/2; i++){
             mid = mid->next;
        }
        
        ListNode* curr2 = mid->next;
        mid->next = nullptr;
        //Reverse the 2nd part:
        ListNode* prev = nullptr;
        while(curr2 != nullptr){
         ListNode* temp = curr2->next;
          curr2->next = prev;
          prev = curr2;
          curr2 = temp;
        }
        
        //Merge two linked lists:
        curr = head;
        curr2 = prev;
        while(curr2 != nullptr){
          ListNode* t1 = curr->next;
          ListNode* t2 = curr2->next;
            curr->next = curr2;
            curr2->next = t1;
            curr = t1;
            curr2 = t2;
        }

    }
};
