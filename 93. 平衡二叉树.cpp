/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
    int getDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left_depth = getDepth(root->left);
        int right_depth = getDepth(root->right);
        if (left_depth > right_depth) {
            if (left_depth - right_depth > 1) is_balance = false;
            return left_depth + 1;
        } else {
            if (right_depth - left_depth > 1) is_balance = false;
            return right_depth + 1;
        }
    }

    bool isBalanced(TreeNode * root) {
        is_balance = true;
        getDepth(root);
        return is_balance;
    }

private:
    bool is_balance;
};

// 总耗时 126 ms
// 您的提交打败了 89.00% 的提交!