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
     * @param A: A TreeNode in a Binary.
     * @param B: A TreeNode in a Binary.
     * @return: Return the least common ancestor(LCA) of the two nodes.
     */
    void makeRoute(TreeNode* root, TreeNode* A, TreeNode* B) {
        if (root == nullptr) return;
        cache.push_back(root);
        if (root == A) A_route = cache;
        if (root == B) B_route = cache;
        makeRoute(root->left, A, B);
        makeRoute(root->right, A, B);
        cache.pop_back();
    }

    TreeNode * lowestCommonAncestor(TreeNode * root, TreeNode * A, TreeNode * B) {
        makeRoute(root, A, B);
        int len_A = A_route.size();
        int len_B = B_route.size();
        int common_length = (len_A < len_B) ? len_A : len_B;
        int i = 0;
        for (; i < common_length; ++i) if (A_route[i] != B_route[i]) return A_route[i - 1];
        if (i == len_A) return A_route[i - 1];
        if (i == len_B) return B_route[i - 1];
    }

private:
    deque<TreeNode*> cache;
    deque<TreeNode*> A_route;
    deque<TreeNode*> B_route;

};

// 总耗时 197 ms
// 您的提交打败了 82.40% 的提交!