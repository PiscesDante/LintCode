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
     * @param root: the root of tree
     * @return: the max node
     */
    void inorderTraversal(TreeNode* root) {
        if (root == nullptr) return;
        inorderTraversal(root->left);
        if (root->val > ret->val) ret = root;
        inorderTraversal(root->right);
    }

    TreeNode * maxNode(TreeNode * root) {
        ret = root;
        inorderTraversal(root);
        return ret;
    }

private:
    TreeNode* ret = nullptr;

};

// 总耗时 167 ms
// 您的提交打败了 78.80% 的提交!