class Solution:
    """
    @param nums: An integer array
    @return: The second max number in the array.
    """
    def secondMax(self, nums):
        sz = len(nums)
        for i in range(0, 2) :
            for j in range(i + 1, sz) :
                if nums[j] > nums[i] :
                    nums[j], nums[i] = nums[i], nums[j]
        return nums[1]

# 总耗时 690 ms
# 您的提交打败了 83.61% 的提交!