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
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){
            int sum=carry;
            if(l1!=nullptr) sum+=l1->val;
            if(l2!=nullptr) sum+=l2->val;
            ListNode* node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
            carry=sum/10;
            if(l1!=nullptr) l1=l1->next;
            if(l2!=nullptr) l2=l2->next;
        }
        if(carry){
            ListNode* t=new ListNode(carry);
            temp->next=t;
        }
        

        
        return dummy->next;

        
    }
};