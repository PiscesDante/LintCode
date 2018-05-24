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
     * @param head: ListNode head is the head of the linked list 
     * @param m: An integer
     * @param n: An integer
     * @return: The head of the reversed ListNode
     */
    ListNode * reverseBetween(ListNode * head, int m, int n) {
        int index = 1;
        ListNode* curr = head;
        for (; index < m; ++index) curr = curr->next;
        ListNode* each_node = curr;
        for (; index <= n; ++index) {
            cache.push(curr->val);
            curr = curr->next;
        }
        while (!cache.empty()) {
            each_node->val = cache.top();
            cache.pop();
            each_node = each_node->next;
        }
        return head;
    }

private:
    stack<int> cache;

};

// 总耗时 242 ms
// 您的提交打败了 79.80% 的提交!