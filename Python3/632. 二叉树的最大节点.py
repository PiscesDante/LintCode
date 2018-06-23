"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""

class Solution:
    """
    @param: root: the root of tree
    @return: the max node
    """
    def __init__(self) :
        self.max_node = None

    def findMax(self, root) :
        if root == None : return
        if root.val > self.max_node.val :
            self.max_node = root
        self.findMax(root.left)
        self.findMax(root.right)

    def maxNode(self, root):
        self.max_node = root
        self.findMax(root)
        return self.max_node

# 总耗时 1436 ms
# 您的提交打败了 22.96% 的提交!