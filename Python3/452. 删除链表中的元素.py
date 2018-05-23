"""
Definition of ListNode
class ListNode(object):
    def __init__(self, val, next=None):
        self.val = val
        self.next = next
"""

class Solution:
    """
    @param head: a ListNode
    @param val: An integer
    @return: a ListNode
    """
    def removeElements(self, head, val):
        if head == None :
            return head
        while head and head.val == val :
            head = head.next
        ref = head
        while ref and ref.next :
            if ref.next.val == val :
                ref.next = ref.next.next
            else :
                ref = ref.next
        return head

# 总耗时: 1611ms
# 您的提交打败了 58.71% 的提交!