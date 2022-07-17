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
        if(node == NULL)return;
      ListNode * temp;
      swap(node->val,node->next->val);
       temp = node->next;
        node->next = temp->next;
        delete temp;
        
    }
};