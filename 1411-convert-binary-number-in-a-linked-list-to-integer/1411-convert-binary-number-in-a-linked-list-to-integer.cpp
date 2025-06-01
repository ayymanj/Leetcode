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
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        int count = 0;
        if(head == NULL) return 0;

        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        int out = 0;
        ListNode* curr = head;
        while(curr != NULL){
            count--;
            if(curr -> val == 1){
                out = out + pow(2,count);
            }
            curr = curr->next;
        }
        return out;
    }
};