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
        ListNode* D1= new ListNode (-1);
        ListNode* D2=new ListNode (-1);
        ListNode* small=D1;
        ListNode* large=D2;
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
    
        small->next = D2->next;
        large->next=nullptr;
        ListNode* result=D1->next;
       delete D1;
       delete D2;
       return result;




        
    }
};