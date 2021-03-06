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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL) return NULL;
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* head;
        if (l1->val <= l2->val) {
            head = l1;
            l1 = l1->next;
        }
        else if (l1->val > l2->val) {
            head = l2;
            l2 = l2->next;
        }
        ListNode* temp = head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
            else {
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        if (l1 == NULL) temp->next = l2;
        else if (l2 == NULL) temp->next = l1;
        return head;
    }
};