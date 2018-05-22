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
     * @param node: the node in the list should be deletedt
     * @return: nothing
     */
    void deleteNode(ListNode * node) {
        swap(node->val, node->next->val);
        ListNode* del = node->next;
        node->next = del->next;
        delete del;
        del = nullptr;
    }
};

// 总耗时 104 ms
// 您的提交打败了 99.00% 的提交!