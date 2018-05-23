class Solution:
    """
    @param number: A 3-digit number.
    @return: Reversed number.
    """
    def reverseInteger(self, number):
        ret = 0;
        time = 100;
        for i in range(3) :
            ret += time * (number % 10);
            number //= 10;
            time //= 10;
        return ret

# 总耗时 503 ms
# 您的提交打败了 63.60% 的提交!