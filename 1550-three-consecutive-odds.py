class Solution(object):
    def threeConsecutiveOdds(self, arr):
        a=len(arr)
        if a<3:
            return False
        for i in range (0, a-2):

            if arr[i]%2!=0 and arr[i+1]%2!=0 and arr[i+2]%2!=0:
                return True
            i=i+1
        return False
            
        