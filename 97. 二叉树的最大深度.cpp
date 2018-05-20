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
     * @return: An integer
     */
    int maxDepth(TreeNode * root) {
        if (root == nullptr) return 0;
        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);
        if (left_depth > right_depth) return left_depth + 1;
        else return right_depth + 1;
    }
};

// 总耗时 140 ms
// 您的提交打败了 99.40% 的提交!