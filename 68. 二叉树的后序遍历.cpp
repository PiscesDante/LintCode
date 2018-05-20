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
     * @return: Postorder in ArrayList which contains node values.
     */
    void func(TreeNode* root) {
        if (root == nullptr) return;
        func(root->left);
        func(root->right);
        ret.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode * root) {
        func(root);
        return ret;
    }

private:
    vector<int> ret;

};

// 总耗时 212 ms
// 您的提交打败了 67.40% 的提交!