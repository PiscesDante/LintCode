/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode * nthToLast(ListNode * head, int n) {
        ListNode* fast = head;
        for (int i = 0; i < n && fast; ++i) fast = fast->next;
        ListNode* ret = head;
        while (fast) {
            fast = fast->next;
            ret = ret->next;
        }
        return ret;
    }
};

// 总耗时 222 ms
// 您的提交打败了 95.80% 的提交!