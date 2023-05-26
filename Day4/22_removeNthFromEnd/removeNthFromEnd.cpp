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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy_head = new ListNode(0);
        dummy_head->next = head;
        ListNode* fast_ptr = dummy_head;
        ListNode* slow_ptr = dummy_head;
        while (fast_ptr->next){
            if (n <= 0){
                slow_ptr = slow_ptr->next;
            }
            fast_ptr = fast_ptr->next;
            n--;
        }
        slow_ptr->next = slow_ptr->next->next;
        return dummy_head->next;
    }
};