"""
Definition of ListNode
class ListNode(object):
    def __init__(self, val, next=None):
        self.val = val
        self.next = next
"""

class Solution:
    """
    @param head: the first node of linked list.
    @return: An integer
    """
    def countNodes(self, head):
        length = 0
        while head :
            length += 1
            head = head.next
        return length

# 总耗时 1308 ms
# 您的提交打败了 69.30% 的提交!