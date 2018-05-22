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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    void push_back(int val) {
        if (head == nullptr) {
            head = new ListNode(val);
            tail = head;
        } else {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
    }

    ListNode * addLists(ListNode * l1, ListNode * l2) {
        int carry = 0;
        while (l1 || l2 || carry) {
            int new_val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            if (new_val > 9) carry = 1;
            else carry = 0;
            new_val %= 10;
            push_back(new_val);
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return head;
    }

private:
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

};

// 总耗时 161 ms
// 您的提交打败了 82.80% 的提交!