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
     * @param root: A Tree
     * @return: Preorder in ArrayList which contains node values.
     */
    void func(TreeNode* root) {
        if (root == nullptr) return;
        ret.push_back(ret->val);
        func(root->left);
        func(root->right);
    }

    vector<int> preorderTraversal(TreeNode * root) {
        func(root);
        return ret;
    }

private:
    vector<int> ret;
};

// 总耗时 203 ms
// 您的提交打败了 52.80% 的提交!