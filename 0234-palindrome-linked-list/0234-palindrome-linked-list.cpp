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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL&&fast->next==NULL) slow=slow->next;
        ListNode*prev=NULL;
        ListNode*current=slow;
        while(current!=NULL){
            ListNode*next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        ListNode*mid=prev;
        ListNode*start=head;
        while(mid!=NULL){
            if(start->val!=mid->val) return false;
            start=start->next;
            mid=mid->next;
        }
        return true;
        
    }
};