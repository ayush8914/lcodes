/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp;
        if(node == NULL)return;
      swap(node->val,node->next->val);
        temp = node->next;
       node->next= temp->next;
        delete temp;
    }
};