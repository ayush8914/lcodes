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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1  == NULL)return list2;
        if(list2 == NULL)return list1;
        ListNode *res=NULL;
        ListNode *l1 = list1;
        ListNode *l2 = list2;
        if(l1->val > l2->val)swap(l1,l2);
        res= l1;
        while(l1 != NULL && l2 != NULL){
            ListNode *tmp;
            if(l1 != NULL && l1->val <= l2->val){
                tmp =l1;
                l1 = l1->next;
            }
                tmp->next = l2;
                swap(l1,l2);
            
        }
        return res;
    }
};