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
     * @param head: the first node of linked list.
     * @return: An integer
     */
    int countNodes(ListNode * head) {
        int size = 0;
        while (head != nullptr) {
            size += 1;
            head = head->next;
        }
        return size;
    }
};

// 总耗时 89 ms
// 您的提交打败了 98.40% 的提交!