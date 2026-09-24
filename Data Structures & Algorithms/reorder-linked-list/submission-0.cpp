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
            count++;
            curr = curr->next;
        }
        int n = count;
        ListNode* mid = head;
        for(int i = 0; i < (n - 1)/2; i++){
           mid = mid->next;
        }
        ListNode* second = mid->next;
        mid->next = nullptr;
        
//Reverse the second part:
        ListNode* curr2 = second;
        ListNode* prev = nullptr;
        while(curr2 != nullptr){
         ListNode* temp = curr2->next;
         curr2->next = prev;
         prev = curr2;
         curr2 = temp;
        }
//Merge two parts:
        ListNode* curr3 = head;
          curr2 = prev;
        while(curr2 != nullptr){
         ListNode* t1 = curr3->next;
         ListNode* t2 = curr2->next;
         curr3->next = curr2;
         curr2->next = t1;
         curr3 = t1;
         curr2 = t2;
        }

    }
};
