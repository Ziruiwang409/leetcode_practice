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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* current_A = headA;
        ListNode* current_B = headB;
        int length_A = 0;
        int length_B = 0;
        
        // get length A
        while (current_A){
            length_A++;
            current_A = current_A->next;
        }
        // get length B
        while (current_B){
            length_B++;
            current_B = current_B->next;
        }
        // reset current node
        current_A = headA;
        current_B = headB;

        // move position
        int diff = length_A - length_B;
        if (diff < 0){
            diff = length_B - length_A;
            while(diff != 0){
                current_B = current_B->next;
                diff--;
            }
        }
        else{
            while(diff != 0){
                current_A = current_A->next;
                diff--;
            }
        }

        while (current_A){
            if (current_A == current_B){
                return current_A;
            }
            current_A = current_A->next;
            current_B = current_B->next;
        }
        return NULL;
    }
};