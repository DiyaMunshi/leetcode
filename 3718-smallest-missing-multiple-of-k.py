class Solution(object):
    def missingMultiple(self, nums, k):
        i=k
        while(1):
            if i not in nums:
                return i
                break
            i=i+k
        