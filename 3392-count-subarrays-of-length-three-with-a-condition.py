class Solution(object):
    def countSubarrays(self, nums):
        f=0
        a=len(nums)
        for i in range (a-1,1,-1) :
            if nums[i]+nums[i-2]==float(nums[i-1])/2:
                f=f+1    
        return f
        