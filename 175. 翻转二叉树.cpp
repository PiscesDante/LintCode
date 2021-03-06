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
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void invertBinaryTree(TreeNode * root) {
        if (root == nullptr) return;
        swap(root->left, root->right);
        invertBinaryTree(root->left);
        invertBinaryTree(root->right);
    }
};

// 总耗时 92 ms
// 您的提交打败了 80.40% 的提交!