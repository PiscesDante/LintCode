class Solution:
    """
    @param n: an integer
    @return: an ineger f(n)
    """
    def fibonacci(self, n):
        if n == 1 :
            return 0
        if n == 2 :
            return 1
        prev = 0
        curr = 1
        for i in range(3, n + 1) :
            prev, curr = curr, curr + prev
        return curr

# 总耗时 793 ms
# 您的提交打败了 95.20% 的提交!