def partition(A, begin, end) :
    head = begin + 1
    tail = end
    while head < tail :
        while A[head] < A[begin] and head < tail : head += 1
        while A[tail] > A[begin] and head < tail : tail -= 1
        if head < tail :
            A[head], A[tail] = A[tail], A[head]
            head += 1
            if head == tail : break
            tail -= 1
            if head == tail : break
    if A[head] < A[begin] :
        A[head], A[begin] = A[begin], A[head]
        return head
    else :
        A[head - 1], A[begin] = A[begin], A[head - 1]
        return head - 1

def quickSort(A, begin, end) :
    if begin >= end : return
    pivot = partition(A, begin, end)
    quickSort(A, begin, pivot - 1)
    quickSort(A, pivot + 1, end)

class Solution:
    """
    @param A: an integer array
    @return: nothing
    """
    def sortIntegers(self, A):
        quickSort(A, 0, len(A) - 1)

# 总耗时 1171 ms
# 您的提交打败了 89.71% 的提交!