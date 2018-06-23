#!/usr/bin/env python3

class Solution:
    """
    @param: source: source string to be scanned.
    @param: target: target string containing the sequence of characters to match
    @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
    """
    def strStr(self, source, target):
        if source == None or target == None : return -1
        if target == '' : return 0
        if source == '' : return -1
        source_len = len(source)
        target_len  = len(target)
        print(source[0 : 0 + target_len])
        for i in range(0, source_len - target_len + 1) :
            if target == source[i : i + target_len] :
                return i
        return -1

# 总耗时 821 ms
# 您的提交打败了 99.80% 的提交!