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
     * @param a: the root of binary tree a.
     * @param b: the root of binary tree b.
     * @return: true if they are identical, or false.
     */
    void isSame(TreeNode * a, TreeNode * b) {
        if (!a && !b) return;
        if (a && b) {
            if (a->val == b->val) {
                isSame(a->left, b->left);
                isSame(a->right, b->right);
            } else {
                ret = false;
                return;
            }
        } else {
            ret = false;
            return;
        }
    }

    bool isIdentical(TreeNode * a, TreeNode * b) {
        isSame(a, b);
        return ret;
    }

private:
    bool ret = true;

};

// 总耗时 274 ms
// 您的提交打败了 82.00% 的提交!