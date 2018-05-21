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
     * @param root: The root of binary tree
     * @return: An integer
     */
    void getDepth(TreeNode* root) {
        curr_depth += 1;
        if (root->left == nullptr && root->right == nullptr) {
            if (v.empty()) v.push_back(curr_depth);
            else if (curr_depth < v[0]) v[0] = curr_depth;
        }
        if (root->left != nullptr) getDepth(root->left);
        if (root->right != nullptr) getDepth(root->right);
        curr_depth -= 1;
    }

    int minDepth(TreeNode * root) {
        if (root == nullptr) return 0;
        getDepth(root);
        return v[0];
    }

private:
    int curr_depth = 0;
    vector<int> v;

};

// 总耗时 508 ms
// 您的提交打败了 70.80% 的提交!