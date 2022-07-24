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
    
    ListNode* m(ListNode* list1, ListNode* list2) {
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
    ListNode* mergeKLists(vector<ListNode*>& v) {
        int len = v.size();
        if(len == 0)return NULL;
        int i=0;
        int j = len-1;
        int last = j;
        while(last != 0){
            i=0;
            j= last;
            while(i<j){
                v[i]  =m(v[i],v[j]);
                i++;
                j--;
            }
            if(i>=j){
                last= j;
            }
        }
        return v[0];
    }
};