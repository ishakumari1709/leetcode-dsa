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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head|| !head->next||k==0) return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next!=nullptr){
            tail=tail->next;
            len++;
        }
        tail->next=head; //circular
        k=k%len;
        for(int i=0;i<len-k;i++){
            tail=tail->next;
        }
        ListNode* newHead=tail->next;
        tail->next=nullptr;
        return newHead;
        
    }
};
/*Count the length of the list → len.

Make it circular by connecting the last node to the head.

Compute effective rotations:
k = k % len

Move len - k steps to find the new tail.

Break the circle after the new tail → set new head.

Return new head.*/