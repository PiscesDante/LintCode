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
     * @param root: the root of the binary tree
     * @return: all root-to-leaf paths
     */
    void routeMaker(TreeNode* root) {
        if (root) {
            cache.push_back(root->val);
            if (root->left) routeMaker(root->left);
            if (root->right) routeMaker(root->right);
            if (root->left == nullptr && root->right == nullptr) {
                string temp;
                int len = cache.size();
                temp += to_string(cache[0]);
                for (int i = 1; i < len; ++i) {
                    temp += "->";
                    temp += to_string(cache[i]);
                }
                ret.push_back(temp);
            }
            cache.pop_back();
        }
    }

    vector<string> binaryTreePaths(TreeNode * root) {
        if (root == nullptr) return ret;
        routeMaker(root);
        return ret;
    }

private:
    deque<int> cache;
    vector<string> ret;
};

// 总耗时 456 ms
// 您的提交打败了 71.20% 的提交!