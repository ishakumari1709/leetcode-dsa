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
    ListNode* reverseLL(ListNode* head){
        ListNode* curr=head;
        ListNode* next=nullptr;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = reverseLL(slow);
        ListNode* copySecond = secondHalf; 
        ListNode* firstHalf = head;
        while(secondHalf){
            if(firstHalf->val != secondHalf->val) return false;
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};