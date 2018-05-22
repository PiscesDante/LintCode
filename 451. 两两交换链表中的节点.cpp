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
     * @return: a ListNode
     */
    ListNode * swapPairs(ListNode * head) {
        if (head == nullptr) return nullptr;
        if (head && head->next == nullptr) return head;
        ListNode* new_next;
        if (head && head->next) new_next = swapPairs(head->next->next);
        ListNode* ret = head->next;
        ret->next = head;
        head->next = new_next;
        return ret;
    }
};

// 总耗时 84 ms
// 您的提交打败了 99.40% 的提交!