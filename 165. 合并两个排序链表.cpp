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
     * @param l1: ListNode l1 is the head of the linked list
     * @param l2: ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    void push_back(ListNode* node) {
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = tail->next;
        }
    }

    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        while (l1 || l2) {
            if (!l1) {
                push_back(l2);
                l2 = l2->next;
            } else if (!l2) {
                push_back(l1);
                l1 = l1->next;
            } else if (l1->val < l2->val) {
                push_back(l1);
                l1 = l1->next;
            } else {
                push_back(l2);
                l2 = l2->next;
            }
        }
        return head;
    }

private:
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

};

// 总耗时 2197 ms
// 您的提交打败了 76.40% 的提交!