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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) return nullptr;
        if(head->next==nullptr) return head;
        ListNode* prev = nullptr;
        ListNode* current = head;
        head=head->next;
        while (current!=nullptr && current->next!=nullptr) {
            ListNode* ptr=current;
            ListNode* temp = current->next;
            ptr->next=temp-> next;
            temp-> next=ptr;
            if(prev) prev->next = temp;

            prev=ptr;
            current=ptr->next;
            
         
        }
        return head;
        
    }
};