class Solution(object):
    def twoSum(self, nums, target):
        r={}
        b=len(nums)
        for i in range (b):
            c=nums[i]
            a= target-c
            if a in r:
                return [r[a],i]
            r[c]=i
        return False
        