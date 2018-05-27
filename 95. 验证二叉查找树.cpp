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
     * @return: True if the binary tree is BST, or false
     */
    void initCache(TreeNode* root) {
        if (root == nullptr) return;
        initCache(root->left);
        cache.push_back(root->val);
        initCache(root->right);
    }

    bool isValidBST(TreeNode * root) {
        initCache(root);
        int len = cache.size();
        for (int i = 0; i < len - 1; ++i) {
            if (cache[i] >= cache[i + 1]) return false;
        }
        return true;
    }

private:
    vector<int> cache;
};

// 总耗时 248 ms
// 您的提交打败了 97.80% 的提交!