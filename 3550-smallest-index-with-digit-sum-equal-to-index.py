class Solution(object):
    def smallestIndex(self, nums):
        for i in range(len(nums)):
            a=str(nums[i])
            s=0
            for j in a:
                s+=int(j)
            if s==i:
                return i
        return -1