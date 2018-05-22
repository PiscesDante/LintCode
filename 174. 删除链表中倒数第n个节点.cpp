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
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: The head of linked list.
     */
    ListNode * removeNthFromEnd(ListNode * head, int n) {
        ListNode* fast = head;
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }
        ListNode* prev = nullptr;
        ListNode* del = head;
        while (fast) {
            fast = fast->next;
            prev = del;
            del = del->next;
        }
        if (del == head) {
            head = head->next;
            delete del;
            del = nullptr;
        } else if (del->next == nullptr) {
            prev->next = nullptr;
            delete del;
            del == nullptr;
        } else {
            prev->next = del->next;
            delete del;
            del = nullptr;
        }
        return head;
    }
};

// 总耗时 232 ms
// 您的提交打败了 95.40% 的提交!