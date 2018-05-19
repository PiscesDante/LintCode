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
     * @param head: a ListNode
     * @param val: An integer
     * @return: a ListNode
     */
    ListNode * removeElements(ListNode * head, int val) {
        if (head == nullptr) return nullptr;
        while (head != nullptr && head->val == val) {
            ListNode* del = head;
            head = head->next;
            delete del;
            del = nullptr;
        }
        if (head == nullptr) return nullptr;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr != nullptr) {
            if (curr->val == val) {
                ListNode* del = curr;
                curr = curr->next;
                prev->next = curr;
                delete del;
                del = nullptr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};

// 总耗时 399 ms
// 您的提交打败了 57.00% 的提交!