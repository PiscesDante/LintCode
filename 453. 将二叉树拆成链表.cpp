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
    void flatten(TreeNode * root) {
        if (root == nullptr) return;
        TreeNode* root_left = root->left;
        TreeNode* root_right = root->right;
        flatten(root->left);
        flatten(root->right);
        if (root->left == nullptr) {
            return;
        } else {
            TreeNode* temp = root->left;
            while (temp->right) temp = temp->right;
            root->left = nullptr;
            root->right = root_left;
            temp->right = root_right;
        }
    }
};

// 总耗时 164 ms
// 您的提交打败了 93.20% 的提交!