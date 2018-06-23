class Solution:
    """
    @param n: a decimal number
    @param k: a Integer represent base-k
    @return: a base-k number
    """
    def hexConversion(self, n, k):
        ret = ''
        digits = "0123456789ABCDEF"
        if n < k : return str(n)
        while n != 0 :
            ret += digits[n % k]
            n = n // k
        return ret[::-1]

# 总耗时 628 ms
# 您的提交打败了 97.33% 的提交!