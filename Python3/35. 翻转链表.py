"""
Definition of ListNode

class ListNode(object):

    def __init__(self, val, next=None):
        self.val = val
        self.next = next
"""

class Solution:
    """
    @param head: n
    @return: The new head of reversed linked list.
    """
    def reverse(self, head):
        prev = None
        while head :
            temp, head.next = head.next, prev
            prev, head = head, temp
        return prev

# 总耗时 1007 ms
# 您的提交打败了 63.75% 的提交!