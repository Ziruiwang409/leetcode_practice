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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy_head = new ListNode(0);
        dummy_head->next = head;
        ListNode* current = dummy_head;
        while (current->next && current->next->next ){
            ListNode* first_node = current->next;
            ListNode* next_group = current->next->next->next;

            // step 1: swap second to first pos
            current->next = current->next->next;
            // step 2: link next of second node to first node
            current->next->next = first_node;
            // step 3: 
            first_node->next = next_group;

            current = current->next->next;
            
        }
        return dummy_head->next;
    }
};