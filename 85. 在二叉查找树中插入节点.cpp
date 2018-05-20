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
    /*
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    void insert(TreeNode* root, TreeNode* node) {
        if (node->val > root->val) {
            if (root->right) insert(root->right, node);
            else root->right = node;
        } else if (node->val < root->val) {
            if (root->left) insert(root->left, node);
            else root->left = node;
        }
    }

    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        if (root) insert(root, node);
        else root = node;
        return root;
    }
};

// 总耗时 148 ms
// 您的提交打败了 90.60% 的提交!