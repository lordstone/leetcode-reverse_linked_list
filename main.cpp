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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        if(head->next->next == NULL){
            ListNode *pt = head->next;
            pt->next = head;
            head->next = NULL;
            return pt;
        }
        ListNode *startptr = head;
        ListNode *ptr = head;
        ListNode *ptr2 = head->next;
        ListNode *tmp;
        while(ptr2 != NULL){
            tmp = ptr2;
            ptr2 = ptr2->next;
            tmp->next = ptr;
            ptr = tmp;
        }//end while
        startptr->next = NULL;
        return tmp;
    }
};
