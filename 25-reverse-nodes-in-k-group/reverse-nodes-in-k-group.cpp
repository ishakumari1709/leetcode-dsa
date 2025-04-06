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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* node = head;
        while(count<k && node!=nullptr){
            node=node->next;
            count++;
        }
         if (count < k) return head;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
         for (int i = 0; i < k; ++i) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};