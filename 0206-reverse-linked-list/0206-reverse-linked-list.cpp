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
    ListNode* reverseList(ListNode* head) {
        ListNode *a=NULL,*b=head,*c;
        if(head != NULL)c=head->next;
        

        while(b != NULL){
            b->next= a;
            a=b;
            b=c;
            if(c != NULL)c=c->next;
        }

        return a;
    }
};