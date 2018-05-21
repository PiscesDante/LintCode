/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        if (!head) return nullptr;
        // deal the head;
        while (head->next && head->val == head->next->val) {
            ListNode* del = head;
            head = head->next;
            delete del;
            del = nullptr;
        }
        // the rest part
        ListNode* ptr = head;
        while (ptr->next) {
            if (ptr->val == ptr->next->val) {
                ListNode* del = ptr->next;
                ptr->next = ptr->next->next;
                delete del;
                del = nullptr;
            } else {
                ptr = ptr->next;
            }
        }
        return head;
    }
};

// 总耗时 208 ms
// 您的提交打败了 92.60% 的提交!