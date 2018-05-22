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
     * @return: The head of linked list.
     */
    void insert_sort(ListNode* head) {
        if (head == nullptr) return;
        insert_sort(head->next);
        while (head && head->next) {
            if (head->val > head->next->val)
                swap(head->val, head->next->val);
            head = head->next;
        }
    }

    ListNode * insertionSortList(ListNode * head) {
        insert_sort(head);
        return head;
    }
};

// 总耗时 373 ms
// 您的提交打败了 86.20% 的提交!