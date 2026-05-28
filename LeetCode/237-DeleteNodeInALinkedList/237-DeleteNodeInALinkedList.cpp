// Last updated: 29/05/2026, 00:06:30
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
        struct Node { 
            int val;
            Node *next;
            Node(int x) : val(x), 
            next(NULL) {}
            };

        node->val = node->next->val;      
        node->next = node->next->next;
    }
};