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
       ListNode* t=head;
       ListNode* st = head;
       ListNode*r;
       int l=0;
       while(st!= NULL){
           l++;
           st=st->next;
       }
       if(l == 0 || l == 1 || k%l ==0)return head;
       st= head;
        k = k%l;
       while(k-- && t !=NULL){
          t=t->next;
       }

       while(t != NULL && t->next!= NULL){
           st = st->next;
           t=t->next;
       }
       r = st->next;
       st->next=NULL;
       if(t != NULL)
       t->next=head;
       return r;
    }
};