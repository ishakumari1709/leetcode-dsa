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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp1 = new ListNode(0, nullptr);
        ListNode* temp2= new ListNode(0, nullptr);
        ListNode* small=temp1;
        ListNode* large=temp2;
       while(head!=nullptr){
        if(head->val<x){
            small->next=head;
            small=small->next;
        }else{
            large->next=head;
            large=large->next;

        }
        head=head->next;
       }
       small->next=temp2->next;
       large->next=nullptr;
       ListNode* result=temp1->next;
       delete temp1;
       delete temp2;
       return result;

        
    }
};